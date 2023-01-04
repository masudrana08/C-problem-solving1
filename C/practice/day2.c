#include <stdio.h>

int main(){
   int A,B,C;
   scanf("%d%d%d", &A,&B,&C);
   if(A==0 || B==0 || C==0){
      printf("No");
   }else if(A==B && B==C){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}