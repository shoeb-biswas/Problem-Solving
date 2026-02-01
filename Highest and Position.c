#include <stdio.h>
int main() {
int a,c,i,max=0,p=0;
for(i=1;i<=100;i++){
    scanf("%d",&a);
    if(a>max){
        max=a;
        p=i;
    }
}
printf("%d\n%d\n",max,p);
    return 0;
}
