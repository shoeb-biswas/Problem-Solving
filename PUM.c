#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int count = 1;
    for (int i = 0; i < N; i++) {
        printf("%d %d %d PUM\n", count, count + 1, count + 2);
        count += 4;
    }
    
    return 0;
}
