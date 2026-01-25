#include <stdio.h>
long long factorial(int n) {
    if (n == 0) {
        return 1;
    }
    long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int a, b;
    while (scanf("%d %d", &a, &b) == 2) {
        long long fac_a = factorial(a);
        long long fac_b = factorial(b);

        printf("%lld\n", fac_a + fac_b);
    }

    return 0;
}
