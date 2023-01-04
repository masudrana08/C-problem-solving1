// Anwer 1
// #include <stdio.h>
// int main(){
//    int nth, i, sum=0, isPlus=1; 
//    scanf("%d", &nth);
//    for(i=1; i<=nth; i++){
//       if(isPlus)
//           sum+=i;
//       else
//          sum-=i;
//       if(i%3 == 0){
//          if(isPlus)
//             isPlus = 0;
//          else
//             isPlus = 1;
//       }
//    }
//    printf("%d", sum);
//    return 0;
// }


// Answer 2
// #include <stdio.h>
// #include <string.h>
// void swap(char *a, char *b);

// int main(){
//    int i, j;
//    char str[1000];
//    scanf("%s", str);
//    for(i=0; i<strlen(str)-1; i++){
//       for(j=0; j<strlen(str)-1; j++){
//          swap(&str[j], &str[j+1]);
//       }
//    }
//    printf("%s", str);
//    return 0;
// }


// void swap(char *a, char *b){
//   if(*a<*b){
//     char temp = *a;
//    *a = *b;
//    *b = temp;
//   }
// }


// Answer 3
// #include <stdio.h>
// int main(){
//    int x, y;
//    scanf("%d%d", &x, &y);
//    int* ptrX = &x;
//    int* ptrY = &y;

//    printf("ptrX = %d and ptrY = %d\n", *ptrX, *ptrY);
//    return 0;
// }

// Answer 4 
// #include <stdio.h>
// int main(){
//    int n, i; 
//    scanf("%d", &n);
//    for(i=0; i<n; i++){
//       int num, j;
//       scanf("%d", &num);
//       j= num / 5;
//       if(j % 2 != 0){
//          j--;
//       }
//       for(; j<num; j+=2){
//          int comb = (j*4) + 20;
//          if(comb == num){
//             printf("%d %d %d %d\n", j+2, j+4, j+6, j+8);
//             break;
//          }
//       }
//    }
//    return 0;
// }

// Answer 5
// #include <stdio.h>
// int oeSum(int *ar, int n);
// int main(){
//    int n, i;
//    scanf("%d", &n);
//    int arr[n];
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
//    int x = oeSum(arr, n);
//    printf("%d", x);
//    return 0;
// }

// int oeSum(int *ar, int n){
//    int sum=0, i;
//    for(i=0; i<n; i++){
//       if((i+1) % 2 == 0 && *(ar+i) % 2 == 0){
//          sum += i+1;
//          sum += *(ar+i);
//       }else if((i+1) % 2 == 1 && *(ar+i) % 2 == 1){
//          sum += i+1;
//          sum += *(ar+i);
//       }
//    }
//    return sum;
// }

// Answer 6
// #include <stdio.h>
// int divBy3(int n);
// int divBy5(int n);

// int main(){
//    int n, i, count=0;
//    scanf("%d", &n);
//    int arr[n];
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
//    for(i=0; i<n; i++){
//       if(divBy3(arr[i]) || divBy5(arr[i]))
//          count ++;
//    }
//    printf("%d", count == 0 ? -1 : count);
// }

// int divBy3(int n){
//    if(n % 3 == 0)
//       return 1;
//    else
//       return 0;
// }

// int divBy5(int n){
//    if(n % 5 == 0)
//       return 1;
//    else
//       return 0;
// }


// #include  <stdio.h>
// void swap(int* x, int *y);
// int main(){
//    int n, i, q, j;
//    scanf("%d", &n);
//    int arr[n];
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
//    scanf("%d", &q);
//    for(j=0; j<q; j++){
//       int x, y;
//       scanf("%d %d", &x, &y);
//       swap(&arr[x-1], &arr[y-1]);
//    }
//    for(i=0; i<n; i++){
//       printf("%d ", arr[i]);
//    }
//    return 0;
// }

// void swap(int* x, int *y){
//    int temp = *x;
//    *x = *y;
//    *y = temp;
// }

// Answer 8
// #include <stdio.h>
// #include <string.h>
// void printt(char *s, int n);
// int main(){
//    char str[1000];
//    scanf("%s", str);
//    printt(str, strlen(str));
//    return 0;
// }
// void printt(char *s, int n){
//    int i;
//    for(i=0; i<n; i++){
//       if(i%2==0){
//          printf("%c", *(s+i));
//       }else{
//          printf("%c%c", *(s+i), *(s+i));
//       }
//    }
// }

// Answer 9
// #include <stdio.h>
// int isPrime(int p);
// float averagee(int* arr, int size);
// int main(){
//    int n, i, countPrime = 0; 
//    scanf("%d", &n);
//    int arr[n];
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
//    for(i=0; i<n; i++){
//       if(isPrime(arr[i]))
//          countPrime ++;
//    }
//    printf("Prime numbers: %d\n", countPrime);
//    printf("Average of all even integers: %.2f", averagee(arr, n));
//    return 0;
// }

// int isPrime(int p){
//    int i;
//    if(p < 2)
//       return 0;
//    for(i=2; i<p; i++){
//       if(p%i == 0)
//          return 0;
//    }
//    return 1;
// }

// float averagee(int* arr, int size){
//    int i, sum=0, count=0;
//    for(i=0; i<size; i++){
//       if(*(arr+i) % 2 == 0){
//          sum += *(arr+i);
//          count++;
//       }
//    }
//    return sum/count;
// }

// Answer 10
#include <stdio.h>
int hasSeven(int n);
int main(){
   int n, i, count=0;
   scanf("%d", &n);
   int arr[n];
   for(i=0; i<n; i++){
      scanf("%d", &arr[i]);
   }
   for(i=0; i<n; i++){
      if(hasSeven(arr[i]))
         count ++;
   }
   printf("%d\n", count);
   if( n%2 == 0 ){
      printf("%s", count >= n/2 ? "Beautiful\n" : "Ugly\n");
   }else{
      printf("%s", count >= (n/2)+1 ? "Beautiful\n" : "Ugly\n");
   }
   return 0;
}

int hasSeven(int a){
   int n = a;
   while(1){
     if(n<=0){
       return 0;
     }
     if(n%10 == 7){
         return 1;
     }else {
         n /= 10;
     }
   }
   return 0;
}