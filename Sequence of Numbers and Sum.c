#include <stdio.h>
int main() {
int M,N;
while(1){
    int r=0,temp;
scanf("%d%d",&M,&N);
if(N<=0 || M<=0){
    break;
}
if(N<M){
    temp=N;
    N=M;
    M=temp;
}
for(int i=M;i<=N;i++){
    printf("%d ",i);
    r += i;
}
printf("Sum=%d\n",r);
}
    return 0;
}
