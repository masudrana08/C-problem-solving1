#include <stdio.h>
int main(){
   int n, i, j, result=0;
   scanf("%d", &n);
   for(i=0; i<n; i++){
      int p, count=0;
      for(j=0; j<3; j++){
         scanf("%d", &p);
         count+=p;
      }
      if(count>1){
         result++;
      }
   }
   printf("%d", result);
   return 0;
}