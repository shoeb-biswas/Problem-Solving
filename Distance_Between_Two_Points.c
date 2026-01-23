#include <stdio.h>
#include <math.h>
int main() {
 double x1,x2,y1,y2,d,e,f;
 scanf("%lf %lf\n",&x1,&y1);
 scanf("%lf %lf",&x2,&y2);
 d=(x2-x1)*(x2-x1);
 e=(y2-y1)*(y2-y1);
 f=sqrt(d+e);
 printf("%.4lf\n",f);
 return 0;
}
