#include <stdio.h>
 
int main() {
 float N1,N2,N3,N4,N5,X1,X2,X3;
 scanf("%f %f %f %f",&N1,&N2,&N3,&N4);

 X1=((N1*2)+(N2*3)+(N3*4)+(N4*1))/10;
 
 if(X1>=7.0){
     printf("Media: %.1lf\nAluno aprovado.\n",X1);
 }
 else if(X1<5){
     printf("Media: %.1lf\nAluno reprovado.\n",X1);
 }
 else if(X1>=5 && X1<=7){
     printf("Media: %.1lf\nAluno em exame.\n",X1);
 
 scanf("%f",&N5);
 printf("Nota do exame: %.1f\n",N5);
 X2=(X1+N5)/2;
 if(X2>=5.0){
     printf("Aluno aprovado.\n");
 }
 else{
     printf("Aluno reprovado.\n");
 }
 printf("Media final: %.1lf\n",X2);
 }
    return 0;
}
