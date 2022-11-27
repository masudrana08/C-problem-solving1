#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   char name[15];
   scanf("%s", name);
   int i;
   for(i=0; i<sizeof(name)/sizeof(char); i++){
      printf("%c ", name[i]);
      if(name[i]=='\0'){
        break;
      }
   }
   return 0;
}
