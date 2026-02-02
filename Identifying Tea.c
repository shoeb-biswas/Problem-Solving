#include <stdio.h>
 
int main() {
int T, A[5],count=0;
scanf("%d",&T);
for(int i=0;i<5;i++){
    scanf("%d",&A[i]);
    if(A[i]==T){
        count++;
    }
}
printf("%d\n",count);
    return 0;
}
