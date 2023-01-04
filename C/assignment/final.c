// Wow Pattern Again
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// void myPrinter(int si, int sp, char ch){
//    int i;
//    for(i=0; i<sp; i++){
//       printf(" ");
//    }
//    for(i=0; i<si; i++){
//       printf("%c", ch);
//    }
//    for(i=0; i<sp; i++){
//       printf(" ");
//    }
//    printf("\n");
// }


// int main(){
//    int n, i; 
//    scanf("%d", &n);
//    int last = (n*2)-1;
//    for(i=1; i<=n; i++){
//       int sign = (i*2) - 1;
//       int space = (last - sign) / 2;
//       if(i%2 == 0){
//          myPrinter(sign, space, '*');
//       }else{
//          myPrinter(sign, space, '^');
//       }
//    }
//    return 0;
// }


// Sort and  Difference  
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// void takeInput(int arr[], int n){
//    int i;
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
// }
// void ascending(int arr[], int n){
//    int i, j;
//    for(i=0; i<n; i++){
//       for(j=0; j<n-1; j++){
//          int temp;
//          if(arr[j]>arr[j+1]){
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//          }
//       }  
//    }
// }
// void descending(int arr[], int n){
//    int i, j;
//    for(i=0; i<n; i++){
//       for(j=0; j<n-1; j++){
//          int temp;
//          if(arr[j]<arr[j+1]){
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//          }
//       }  
//    }
// }
// void printer(int arr1[], int arr2[], int n){
//    int i;
//    for(i=0; i<n; i++){
//       printf("%d ", arr1[i]-arr2[i]);
//    }
//    printf("\n");
// }
// int main() {
//    int n, i;
//    scanf("%d", &n);
//    int arr1[n];
//    int arr2[n];
//    takeInput(arr1, n);
//    takeInput(arr2, n);
//    ascending(arr1,  n);
//    descending(arr2, n);
//    printer(arr1, arr2, n);
//    return 0;
// }


// Fifa Year
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//    int n;
//    scanf("%d", &n);
//    printf("%s", n%400 == 0 ? "Yes" : n%4 == 0 && n%100 != 0 ? "Yes" : "No");
//    return 0;
// }

// Reverse 
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//    int n, i;
//    scanf("%d", &n);
//    int arrA[10] = {'0','A', 'B', 'C', 'D', 'E', 'F', 'G','H', 'I'};
//    int arr1[n];
//    for (i=1; i<=n; i++){
//       scanf("%d", &arr1[i]);
//    }
//    for (i=1; i<=n; i++){
//       if(arr1[i]%10 == arr1[i]){
//          printf("%c\n", arrA[arr1[i]]);
//       }else{
//          int x = arr1[i];
//          while(1){
//             printf("%c", arrA[x%10]);
//             if(x%10 == x) {
//                printf("\n");
//                break;
//             }
//             x = x/10;
//          }
         
//       }

//    }
//    return 0;
// }

// Twin Number 
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//    int n, s, i;
//    scanf("%d%d", &n, &s);
//    for(i=1; i<s; i++){
//       if(n + (i*2) == s){
//          printf("%d\n", i);
//          break;
//       }
//    }
//    return 0;
// }

// L to R
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// void printPrime(){
//    int l, r, i, j;
//    scanf("%d%d", &l, &r);
//    while(l<=r){
//       if(l==1 || l==2){
//          printf("%d ", l);
//       }
//       for(i=2; i<l; i++){
//          if(l%i == 0){
//             break;
//          }
//          if(i==(l-1) && l%i != 0){
//             printf("%d ", l);
//          }
//       }
//       l++;
//    }
//    printf("\n");
// }

// int main() {
//    int n, i;
//    scanf("%d", &n);
//    for(i=0; i<n; i++){
//       printPrime();
//    }
//    return 0;
// }

// Search Engine
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//    int n, i;
//    scanf("%d", &n);
//    for(i=0; i<n; i++){
//       int sizeOfArr, find, j;
//       scanf("%d", &sizeOfArr);
//       int arr[sizeOfArr];
//       for(j=0; j<sizeOfArr; j++){
//          scanf("%d", &arr[j]);
//       }
//       scanf("%d", &find);

//       for(j=0; j<sizeOfArr; j++){
//          if(arr[j]==find){
//             printf("Case %d: %d\n",i+1,j+1);
//             break;
//          }
//          if(j==sizeOfArr-1 && arr[j] != find){
//             printf("Case %d: Not Found\n", i+1);
//          }
//       }
//    }
//    return 0;
// }


// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main() {
//    int n;
//    scanf("%d", &n);
//    char s[n];
//    scanf("%s", s);
//    int i, j, count=0;

//    for(i=0; i<strlen(s); i++){
//       count ++;
//       for(j=0; j<strlen(s); j++){
//          if(i!=j && s[i]==s[j]){
//             count --;
//             break;
//          }
//       }
//    }
//    printf("%d\n", count);
//    return 0;
// }


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

// void gcd(){
//    int count = 0;
//       scanf("%d%d", &a, &b);
//       while(a && b){
//          if(a > b){
//             a %= b;
//          }else{
//             b %= a;
//          }
//       }
//       if(a==1 && b==0){
//          count ++;
//       }
//       if(b==1 && a==0){
//          count++
//       }
// }
int main() {
   int n, i;
   scanf("%d", &n);
   for(i=0; i<n; i++){
      int m, j, count=0;
      scanf("%d", &m);
      int arr[m];
      for(j=0; j<m; j++){
         scanf("%d", &arr[j]);
      }
      int k, l;
      for(k=0; k<m; k++){
         for(l=0; l<m; l++){
            if(k==l){
               continue;
            }else{
               int a, b;
               a= arr[k];
               b= arr[l];
               while(a && b){
                  if(a > b){
                     a %= b;
                  }else{
                     b %= a;
                  }
               }
               if(a==1 && b==0){
                  count ++;
               }
               if(b==1 && a==0){
                  count++;
               }
            }
         }
      }
      printf("%d\n", count);
   }
   return 0;
}
