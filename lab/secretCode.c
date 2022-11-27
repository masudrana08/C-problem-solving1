#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   int t,i,j;
   unsigned long long int n[100];
   scanf("%d", &t);
   for(i=0; i<t; i++){
      scanf("%lld", &n[i]);
   }
   for(i=0; i<t; i++){
      if(n[i]<2){
         printf("No\n");
      }else{
         for(j=2; j<n[i]; j++){
         
         if(n[i]%j == 0){
            printf("No\n");
            break;
         }
         if(j==n[i]-1 && n[i]%j != 0){
            printf("Yes\n");
            break;
         }
      }
      }
   }
   return 0;
}
