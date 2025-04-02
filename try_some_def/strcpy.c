#include <stdio.h>
#include <string.h>
// strcpy 覆盖作用
int main() {
    char source[] = "Hello, World!";
    char destination[50];
    scanf("%s",&destination);

    printf("ori: %s\n", destination);
    strcpy(destination, source);
    printf("source: %s\n", source);
    printf("aft: %s\n", destination);

    return 0;
}
