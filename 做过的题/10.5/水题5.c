#include <stdio.h>

int main() {
    long long m;
    scanf("%lld", &m);

    long double t = 1.0;
    for (long long i = 2; i <= m; i++) {
        t -= 1.0L / (i * i);
    }

    printf("%.6Lf\n", t);
    return 0;
}
