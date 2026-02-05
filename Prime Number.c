#include <stdio.h>
#include <math.h>

int main() {
    int N, X;
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d", &X);
        int is_prime = 1;
        
        if (X < 2) {
            is_prime = 0;
        } else if (X == 2) {
            is_prime = 1;
        } else if (X % 2 == 0) {
            is_prime = 0;
        } else {
            for (int j = 3; j <= sqrt(X); j += 2) {
                if (X % j == 0) {
                    is_prime = 0;
                    break;
                }
            }
        }
        
        if (is_prime) {
            printf("%d eh primo\n", X);
        } else {
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}
