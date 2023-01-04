#include <stdio.h>
int main(){
   int inp;
   printf("How many chocolate you want to purchase? \n");
   scanf("%d", &inp);
   int chocolate = inp;
   int pack = inp; 
   while(pack>=4){
      chocolate += pack / 4;
      pack = (pack / 4) + (pack % 4);
   }
   printf("You will get %d chocolate\n", chocolate);
   return 0;
}