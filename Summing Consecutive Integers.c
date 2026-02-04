#include <stdio.h>
int main() {
    int A, N;
    while (1) {
        scanf("%d %d", &A, &N);
        if (N > 0) break;
        while (N <= 0) scanf("%d", &N);
    }
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += A + i;
    }
    printf("%d\n", sum);
    return 0;
}
