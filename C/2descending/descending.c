#include<stdio.h>

void main(){
   int num;
   int i;
   int count = 0;
   printf("Give any absolute number for descending: \n");
   scanf("%d", &num);

   for(i=num; i>=1; i--){
      count++;
      printf("%d \t", i);

      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }
      if(i>=1){
         i--;
         printf("%d \t", i);
      }

   }
   printf("\n %d time loop", count);
}