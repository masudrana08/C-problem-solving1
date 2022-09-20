#include <stdio.h>
 
int main() {
   int distance;
   float spentFuel;
   scanf("%d%f", &distance, &spentFuel);
   printf("%.3f km/l\n", (float)(distance/spentFuel));
   return 0;
}