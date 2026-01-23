#include <stdio.h>
 
int main() {
 char name[10];
 double B,C,X;
 scanf("%s %lf %lf",name,&B,&C);
 X=(C*0.15)+B;
 printf("TOTAL = R$ %.2lf\n",X);
 return 0;
}
