#include <stdio.h>
int main() {
int N,a;
scanf("%d",&N);
for(int i=1;i<=N;i++){
if(i%2==0){
    a=i*i;
    printf("%d^2 = %d\n",i,a);
}
}
    return 0;
}
