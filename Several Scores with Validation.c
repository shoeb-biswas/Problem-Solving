#include <stdio.h>
int main() {
    double score, sum;
    int count, choice;
    do {
        count = 0;
        sum = 0.0;
        while (count < 2) {
            scanf("%lf", &score);
            if (score >= 0.0 && score <= 10.0) {
                sum += score;
                count++;
            } else {
                printf("nota invalida\n");
            }
        }
        printf("media = %.2lf\n", sum / 2.0);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &choice);
        } while (choice != 1 && choice != 2);
    } while (choice == 1);

    return 0;
}
