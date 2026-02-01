#include <stdio.h>
 
int main() {
 
double x,y,r;
int N;
scanf("%d",&N);
for(int i=1;i<=N;i++){
scanf("%lf%lf",&x,&y);
if(y==0){
        printf("divisao impossivel\n");
}else{
printf("%.1lf\n",x/y);

}
}
    return 0;
}
