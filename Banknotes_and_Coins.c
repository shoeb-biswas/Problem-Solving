#include <stdio.h>
 
int main() {
 double N;
 scanf("%lf",&N);
 N=(int)(N*100);
 int integerN;
 integerN=N;
 printf("NOTAS:\n");
 int note100,note50,note20,note10,note5,note2,note1,wehave,p1,p2,p3,p4,p5,p6;
 note100=integerN/10000;
 printf("%d nota(s) de R$ 100.00\n",note100);
 wehave=integerN%(100*100);
 note50=wehave/5000;
 printf("%d nota(s) de R$ 50.00\n",note50);
 wehave=wehave%5000;
 note20=wehave/2000;
 printf("%d nota(s) de R$ 20.00\n",note20);
 wehave=wehave%2000;
 note10=wehave/1000;
 printf("%d nota(s) de R$ 10.00\n",note10);
 wehave=wehave%1000;
 note5=wehave/500;
 printf("%d nota(s) de R$ 5.00\n",note5);
 wehave=wehave%500;
 note2=wehave/200;
 printf("%d nota(s) de R$ 2.00\n",note2);
 wehave=wehave%200;
 //coins
 //1, 0.50, 0.25, 0.10, 0.05 and 0.01
 printf("MOEDAS:\n");
 p1=wehave/100;
 printf("%d moeda(s) de R$ 1.00\n",p1);
 wehave=wehave%100;
 p2=wehave/50;
 printf("%d moeda(s) de R$ 0.50\n",p2);
 wehave=wehave%50;
 p3=wehave/25;
 printf("%d moeda(s) de R$ 0.25\n",p3);
 wehave=wehave%25;
 p4=wehave/10;
 printf("%d moeda(s) de R$ 0.10\n",p4);
 wehave=wehave%10;
 p5=wehave/5;
 printf("%d moeda(s) de R$ 0.05\n",p5);
 wehave=wehave%5;
 p6=wehave/1;
 printf("%d moeda(s) de R$ 0.01\n",p6);
    return 0;
}
