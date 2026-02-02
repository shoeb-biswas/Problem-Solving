#include <stdio.h>
int main() {
    double score, sum = 0.0;
    int count = 0;
    while (count < 2) {
        scanf("%lf", &score);
        if (score < 0.0 || score > 10.0) {
            printf("nota invalida\n");
        } else {
            sum += score;
            count++;
        }
    }
    printf("media = %.2lf\n", sum / 2.0);
    return 0;
}
