#include <stdio.h>
 
int main() {
 
    float a,x,y;
    int z;
    scanf("%f",&a);
    if(a>=0 && a<=400.00){
        x=(a*15)/100;
        y=x+a;
        z=15;
    }else if(a>=400.01 && a<=800.01){
        x=(a*12)/100;
       y=x+a;
       z=12;
    }else if(a>=800.01 && a<=1200.00){
        x=(a*10)/100;
        y=x+a;
        z=10;
    }else if(a>=1200.01 && a<=2000.00){
        x=(a*7)/100;
        y=x+a;
        z=7;
    }else if(a>=2000.01){
        x=(a*4)/100;
        y=x+a;
        z=4;
    }
        printf("Novo salario: %.2f\n",y);
        printf("Reajuste ganho: %.2f\n",x);
        printf("Em percentual: %d %%\n",z);
    return 0;
}
