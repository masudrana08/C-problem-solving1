#include <stdio.h>
int main(){
   unsigned long long int n, m, a;
   int r, r2;
   scanf("%d%d%d",&n,&m,&a);
   r = n*2 + m*2;
   r2 = a*a;
   int result = r / r2;
   printf("%d", result);
   return 0;
}