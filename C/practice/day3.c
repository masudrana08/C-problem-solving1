// n to m where n and m are times
#include <stdio.h>
int main(){
   int n, m, most = 23;
   scanf("%d %d", &n, &m);

   int i;
   if(n>m){
      for(i=n; i<=most; i++){
         printf("%d ", i);
         if(i==23){
            i=0;
            most = m;
            printf("%d ", 0);
         }
      }
   }else{
      for(i=n; i<=m; i++){
         printf("%d ", i);
      }
   }

   return 0;
}


// Print all divisor
//  #include <stdio.h>
//  #include <math.h>
// int main(){
//    int n, value, i, position=0;
//    scanf("%d", &n);
//    value = sqrt(n);
//    int divisors[value*2];
//    divisors[0] = 1;
//    position++;
//    for(i=2; i<=value; i++){
//       if(n % i == 0){
//          divisors[position] = i;
//          position++;
//          divisors[position] = n / i;
//          position++;
//       }
//    }
//    divisors[position] = n;

//    for(i=0; i<value*2; i++){
//       if(divisors[i]<=n){
//          printf("%d ", divisors[i]);
//       }
//    }
//    return 0;
// }


// 1 to N that are divisible by M.
//  #include <stdio.h>
// int main(){
//    int n,m, i, serial=1;
//    scanf("%d%d", &n,&m);
//    for(i=m; i<=n; i=m*serial){
//       serial++;
//       printf("%d ", i);
//    }
//    return 0;
// }


// print all even number
// #include <stdio.h>
// int main(){
//    int n, i;
//    scanf("%d", &n);
//    for(i=2; i<=n; i+=2){
//       printf("%d ", i);
//    }
//    return 0;
// }

// 1  to Integer 
// #include <stdio.h>
// int main(){
//    int n, i;
//    scanf("%d", &n);
//    if(n>0){
//       for (i=1; i<=n; i++){
//       printf("%d ", i);
//    }
//    }else{
//       for (i=1; i>=n; i--){
//       printf("%d ", i);
//    }
//    }
//    return 0;
// }