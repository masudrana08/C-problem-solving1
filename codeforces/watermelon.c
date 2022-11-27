#include <stdio.h>
int main(){
   unsigned int n;
   scanf("%d", &n);
   (n%2==0 && n > 3) ? printf("YES"): printf("NO");
   return 0;
}