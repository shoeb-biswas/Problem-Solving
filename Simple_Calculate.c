#include <stdio.h>
 
int main() {
 
    int A,C,D,E;
    float B,F,X;
    scanf("%d %d %f\n",&A,&C,&B);
    scanf("%d %d %f",&D,&E,&F);
    X=(C*B)+(E*F);
    printf("VALOR A PAGAR: R$ %.2f\n",X);
 
    return 0;
}
