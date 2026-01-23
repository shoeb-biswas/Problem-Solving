#include <stdio.h>
#include <stdlib.h>
 int main() {
 int a,b,C,X,Y;
 scanf("%d %d %d",&a,&b,&C);
 X=(a+b+abs(a-b))/2;
 X=(X+C+abs(X-C))/2;
 printf("%d eh o maior\n",X);
    return 0;
}
