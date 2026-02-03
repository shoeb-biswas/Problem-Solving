#include <stdio.h>

int main() {
    int inter, gremio;
    int inter_wins = 0, gremio_wins = 0, draws = 0, total_matches = 0;
    int option;
    
    do {
        scanf("%d %d", &inter, &gremio);
        total_matches++;
        
        if (inter > gremio) {
            inter_wins++;
        } else if (gremio > inter) {
            gremio_wins++;
        } else {
            draws++;
        }
        
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%d", &option);
    } while (option == 1);
    
    printf("%d grenais\n", total_matches);
    printf("Inter:%d\n", inter_wins);
    printf("Gremio:%d\n", gremio_wins);
    printf("Empates:%d\n", draws);
    
    if (inter_wins > gremio_wins) {
        printf("Inter venceu mais\n");
    } else if (gremio_wins > inter_wins) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }
    
    return 0;
}
