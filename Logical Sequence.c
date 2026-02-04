#include <stdio.h>
int main() {
int N,x,y,z,b,a;
scanf("%d",&N);
for(int i=1;i<=N;i++){
   x=i*1;
    y=i*i;
     a=y+1;
    z=y*i;
    b=z+1;
printf("%d %d %d\n",x,y,z);
printf("%d %d %d\n",x,a,b);
}
return 0;
}
