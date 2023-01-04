#include <stdio.h>
 
int main() {
   int second, minute, hour;
   second=minute=hour=0;
   scanf("%d",&second);

   if(second>=3600){
      hour = second / 3600;
      second = second - (hour*3600);
   }
   if(second>=60){
      minute = second / 60;
      second = second - (minute*60);
   }

   printf("%d:%d:%d", hour, minute, second);
   return 0;
}