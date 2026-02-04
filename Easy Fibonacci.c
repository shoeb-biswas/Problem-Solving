#include <stdio.h>
int main() {
    int a, st = 0, nd = 1, fibo;
        scanf("%d", &a);
    if (a == 1) {
        printf("%d\n", st);
        return 0;
    }
    printf("%d %d", st, nd);
    for (int i = 2; i < a; i++) {
        fibo = st + nd;
        printf(" %d", fibo);
        st = nd;
        nd = fibo;
    }
    printf("\n");
    return 0;
}
