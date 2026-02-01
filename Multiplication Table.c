#include <stdio.h>
int main() {
int a,r;
scanf("%d",&a);
if (a > 1 && a < 1000) {
for(int i=1;i<=10;i++){
    r=i*a;
    printf("%d x %d = %d\n",i,a,r);
}
}
    return 0;
}
