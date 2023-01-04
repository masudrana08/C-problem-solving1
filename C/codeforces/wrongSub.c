#include <stdio.h>
int main(){
   long long unsigned int n, k, i;
   scanf("%lld %lld", &n, &k);
   for(i=0; i<k; i++){
      if(n%10==0){
         n /= 10;
      }else{
         n -= 1;
      }
   }
   printf("%ld", n);
   return 0;
}