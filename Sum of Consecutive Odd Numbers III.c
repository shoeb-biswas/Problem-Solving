#include <stdio.h>

int main() {
    int N, X, Y, i, sum;
    
    scanf("%d", &N);
    
    while (N--) {
        scanf("%d %d", &X, &Y);

        if (X % 2 == 0) {
            X++; 
        }

        sum = 0;
        for (i = 0; i < Y; i++) {
            sum += X;
            X += 2;
        }

        printf("%d\n", sum);
    }

    return 0;
}
