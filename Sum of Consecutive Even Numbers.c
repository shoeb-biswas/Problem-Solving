#include <stdio.h>
int main() {
    int X;
    while (1) {
        scanf("%d", &X);
        if (X == 0) {
            break;
        }
        if (X % 2 != 0) {
            X++;
        }
        int sum = X + (X + 2) + (X + 4) + (X + 6) + (X + 8);
        printf("%d\n", sum);
    }
    return 0;
}
