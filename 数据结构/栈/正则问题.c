#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return (a > b) ? a : b;
}

int calculate_max_length(const char *expression, int *index) {
    int max_length = 0;
    int current_length = 0;

    while (expression[*index] != '\0') {
        if (expression[*index] == '(') {
            (*index)++; // Move past '('
            current_length += calculate_max_length(expression, index);
        } else if (expression[*index] == ')') {
            (*index)++; // Move past ')'
            break;
        } else if (expression[*index] == '|') {
            max_length = max(max_length, current_length);
            current_length = 0;
            (*index)++; // Move past '|'
        } else { // Handling character 'x'
            current_length++;
            (*index)++;
        }
    }
    max_length = max(max_length, current_length);
    return max_length;
}

int main() {
    char expression[101]={'\0'};
    scanf("%s",expression);
    int index = 0;
    int length = calculate_max_length(expression, &index);
    printf("%d\n", length);
    return 0;
}
