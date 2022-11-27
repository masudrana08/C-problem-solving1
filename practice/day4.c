#include <stdio.h>

int main(){
   int n, i;
   scanf("%d", &n);
   for(i=0; i<n; i++){
      printf("*");
   }
    printf("\n");
   for(i=0; i<n; i++){
      int j;
      for(j=0; j<n; j++){
         if(j==0 || j == n-1){
            printf("*");
         }
         else{
            printf(" ");
         }
      }
      printf("\n");
   }
   for(i=0; i<n; i++){
      printf("*");
   }


   return 0;
}