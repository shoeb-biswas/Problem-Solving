#include <stdio.h>
 
int main() {
 double A,B,C,V,W,X,Y,Z;
 scanf("%lf %lf %lf",&A,&B,&C);
 V=0.5*(A*C);
 W=3.14159*C*C;
 X=0.5*(A+B)*C;
 Y=B*B;
 Z=A*B;
 printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf\n",V,W,X,Y,Z);
 return 0;
