#include <stdio.h>
#include <math.h> 
int main() {
 
   double a,b,c,bal,R1,R2;
   scanf("%lf %lf %lf",&a,&b,&c);
   bal=(b*b)-(4*a*c);
   if(a==0 || bal<0){
       printf("Impossivel calcular\n");
   }else{
       R1=(-b+sqrt(bal))/(2*a);
       R2=(-b-sqrt(bal))/(2*a);
       printf("R1 = %.5lf\n",R1);
       printf("R2 = %.5lf\n",R2);

   }

    return 0;
}
