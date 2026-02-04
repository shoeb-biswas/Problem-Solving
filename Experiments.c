#include <stdio.h>

int main() {
    int N, amount, total = 0, rabbits = 0, rats = 0, frogs = 0;
    char type;
    
    scanf("%d", &N);
    
    for (int i = 0; i < N; i++) {
        scanf("%d %c", &amount, &type);
        
        total += amount;
        
        if (type == 'C') {
            rabbits += amount;
        } else if (type == 'R') {
            rats += amount;
        } else if (type == 'S') {
            frogs += amount;
        }
    }
    
    printf("Total: %d cobaias\n", total);
    printf("Total de coelhos: %d\n", rabbits);
    printf("Total de ratos: %d\n", rats);
    printf("Total de sapos: %d\n", frogs);
    
    printf("Percentual de coelhos: %.2f %%\n", (rabbits * 100.0) / total);
    printf("Percentual de ratos: %.2f %%\n", (rats * 100.0) / total);
    printf("Percentual de sapos: %.2f %%\n", (frogs * 100.0) / total);
    
    return 0;
}
