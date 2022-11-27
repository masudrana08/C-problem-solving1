// #include <stdio.h>
// int checker(int n);
// char a,b,c;
// int main(){
//    char str[1000];
//    scanf("%s", str);
//    int i=0;
//    while(1){
//       if(str[i]=='\0') break;
//       checker(str[i]);
//       if(a=='1' && b=='9' && c=='7') {
//          printf("Yes");
//          return 0;
//       }
//       i++;
//    }
//       if(a!='1' || b!='9' || c!='7') {
//          printf("No");
//       }
//    printf("%c", a);
//    return 0;
// }

// int checker(int n){
//    if(n == '1'){
//       a = n;
//    }
//    if(n == '9'){
//       b = n;
//    }
//    if(n == '7'){
//       c = n;
//    }
// }

// #include <stdio.h>
// int main(){
//    char str[1000];
//    scanf("%s", str);
//    int i=0;
//    while(1){
//       if(str[i]=='\0') break;
//       if(str[i]>='a' && str[i]<='z'){
//          str[i] -= 32;
//       }else{
//          str[i] += 32;
//       }
//       i++;
//    }
//    printf("%s", str);
//    return 0;
// }


// #include <stdio.h>
// int main(){
//    int n, nth, i;
//    scanf("%d%d", &n, &nth);
//    int arr[n-1];
//    for(i=0; i<n/2; i++){
//       arr[i] = (i+1) * 2;
//    }
//    int x=1;
//    for(i=(n/2); i<n; i++){
//       arr[i] = x;
//       x+=2;
//    }
//    for(i=0; i<n; i++){
//       printf("%d ", arr[i]);
//    }
//    printf("\n");
//    printf("The %dth element in this sequence is %d.", nth, arr[nth-1]);
//    return 0;
// }

// Answer 5:

// #include <stdio.h>
// int add_three_nums(int a, int b, int c);
// int main(){
//    int x, y;
//    scanf("%d%d", &x, &y);
//    int z = add_three_nums(x,y,0);
//    printf("%d", z);
//    return 0;
// }
// int add_three_nums(int a, int b, int c)
// {
// 	return a+b+c;
// }


// Answer 6:  

// #include <stdio.h>
// int factorial(int n);
// double ratio(int x, int y);

// int main(){
//    int a, b, c;
//    scanf("%d", &a);
//    printf("Factorial of %d is %d\n", a, factorial(a));
//    scanf("%d%d", &b, &c);
//    printf("Ratio of %d and %d is %d%%\n", b, c, (int)ratio(b,c));
//    return 0;
// }

// int factorial(int n){
//    int i, total=1;
//    for(i=1; i<=n; i++){
//       total *= i;
//    }
//    return total;
// }
// double ratio(int x, int y){
//    float result1 = factorial(x);
//    float result2 = factorial(y);
//    float result = (result1/result2)*100;
//    return result;
// }

// Answer 7:
// #include <stdio.h>
// int sort(int n, int arr[]);
// float median(int n, int *arr);

// int main(){
//    int n, i, j;
//    scanf("%d", &n);
//    int arr[n];
//    for(i=0; i<n; i++){
//       scanf("%d", &arr[i]);
//    }
//    sort(n, arr);
//    printf("Median = %.1f", median(n, arr));
  
//    return 0;
// }

// int sort(int n, int *arr){
//    int i, j;
//    for(i=0; i<n-1; i++){
//       for(j=0; j<n-1; j++){
//          if(arr[j]>arr[j+1]){
//             int temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//          }
//       }
//    }
//    printf("Sorted: ");
//    for(i=0; i<n; i++){
//       printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
// }

// float median(int n, int *arr){
//    int middle = n/2;
//    if(n%2 == 0){
//       return ((float)arr[middle-1]+(float)arr[middle])/2;
//    }else{
//       return (float)arr[middle];
//    }
// }

// Answer 8: 
// #include <stdio.h>
// int main(){
//    int i, n;
//    char str[10000];
//    scanf("%s%d", str, &n);
//    for(i=0; i<10000; i++){
//       if(str[i]=='\0') break;
//       if(str[i]+n <= 'z'){
//          str[i] = str[i]+n;
//       }else{
//          int x = 'z'-str[i];
//          str[i] = 'a'+(n-x-1);
//       }
//       printf("%c", str[i]);
//    }
   
//    return 0;
// }



// Answer 10 
// #include<stdio.h>
// char grade(int n);
// int main()
// {
//     int mark;
//     scanf("%d", &mark);
//     printf("Grade is '%c'", grade(mark));
//     return 0;
// }

// char grade(int n){
//     if(n >= 80 && n <= 100) return 'A';
//     else if(n >= 60 && n <= 79) return 'B';
//     else if(n >= 40 && n <= 59) return 'C';
//     else if(n >= 0 && n <= 39) return 'F';
//     else return '\0';
// }

// #include <stdio.h>
// int main(){
//    int a=3,b=3;
//    int arr[a][b], i, j;
//    for(i=0; i<a; i++){
//       for(j=0; j<b; j++){
//          scanf("%d", &arr[i][j]);
//       }
//    }
//    for(i=0; i<a; i++){
//       for(j=0; j<b; j++){
//          printf("%d ", arr[j][i]);
//       }
//       printf("\n");
//    }
   
//    return 0;
// }