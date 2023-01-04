#include <stdio.h>
int main(){
   int arr[3] = {1,2,3};
   *(arr+1) = 10;
   printf("%d", arr[1]);
   return 0;
}