#include <stdio.h>
int main() {
int T[5],T2,T3,T4,a,r=0;
for(int i=0; i<3;i++){
    scanf("%d",&T[i]);
    a=T[i]-1;
    T[i]=a;
}
scanf("%d",&T4);
for(int i=0;i<3;i++){
    r=r+T[i];
}
r=r+T4;
printf("%d\n",r);
    return 0;
}
