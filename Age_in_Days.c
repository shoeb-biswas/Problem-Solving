#include <stdio.h>
 
int main() {
int N,years,day,month,have;
scanf("%d",&N);
//1month=30days
//1year=365days
years=N/365;
have=N%365;
printf("%d ano(s)\n",years);
month=have/30;
printf("%d mes(es)\n",month);
have=have%30;
day=have/1;
printf("%d dia(s)\n",day);
    return 0;
}
