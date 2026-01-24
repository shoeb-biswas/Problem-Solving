#include <stdio.h>
 
int main() {
 int N,note100,note50,note20,note10,note5,note2,note1,wehave;
 scanf("%d",&N);
 printf("%d\n",N);
 note100=N/100;
 printf("%d nota(s) de R$ 100,00\n",note100);
 wehave=N%100;
 note50=wehave/50;
 printf("%d nota(s) de R$ 50,00\n",note50);
 wehave=wehave%50;
 note20=wehave/20;
 printf("%d nota(s) de R$ 20,00\n",note20);
 wehave=wehave%20;
 note10=wehave/10;
 printf("%d nota(s) de R$ 10,00\n",note10);
 wehave=wehave%10;
 note5=wehave/5;
 printf("%d nota(s) de R$ 5,00\n",note5);
 wehave=wehave%5;
 note2=wehave/2;
 printf("%d nota(s) de R$ 2,00\n",note2);
 wehave=wehave%2;
 note1=wehave/1;
 printf("%d nota(s) de R$ 1,00\n",note1);
    return 0;
}
