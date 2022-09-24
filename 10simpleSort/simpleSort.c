#include <stdio.h>
#include <stdlib.h>


void value(int ptr){
   ptr = 10;
}
void reference(int *ptr){
   *ptr = 10;
}

int main() {
   int x = 20;
   printf("x1: %d\n", x);
   // reference(&x);
   value(x);
   printf("x2: %d", x);
   return 0;
}