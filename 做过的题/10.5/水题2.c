#include <stdio.h>

double t = 1;

int suan(int x) {
    for (int i = x; i >= 2; i--) {
        t += 1.0 / i;
    }
    return 0;
}

int main() {
    int m;
    scanf("%d", &m);
    suan(m);
    printf("%.6lf", t);
}
