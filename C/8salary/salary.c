#include <stdio.h>
 
int main() {
   int employee, workHour;
   float rate;
   scanf("%d%d%f", &employee, &workHour, &rate);
   printf("NUMBER = %d\n", employee);
   printf("SALARY = U$ %.2f\n", (float)workHour*rate);
   return 0;
}

