#include <stdio.h>
 
int main() {
 int N,hour,minutes,second,have;
 scanf("%d",&N);
 hour=N/3600;
 have=N%3600;
 minutes=have/60;
 have=have%60;
 second=have/1;
 printf("%d:%d:%d\n",hour,minutes,second);
 
    return 0;
}
