// #include <stdio.h>
// int main(){
//    int n = 3;
//    int matrix[n][n], i, j;
//    for(i=0; i<n; i++){
//       for(j=0; j<n; j++){
//          scanf("%d", &matrix[i][j]);
//       }
//    }
//    int c;
//    int sumDiagonal1=0, sumDiagonal2=0;
//    for(i=0; i<n; i++){
//       int sumRow=0, sumCol=0;
//       for(j=0; j<n; j++){
//          sumRow += matrix[i][j];
//       }
//       if(i==0) c = sumRow;
//       for(j=0; j<n; j++){
//          sumCol += matrix[j][j];
//       }
//       for(j=0; j<n; j++){
//          if(i==j){
//             sumDiagonal1 += matrix[i][j];
//          }
//       }
//       int x=2;
//       for(j=0; j<n; j++){
//          if(j==x){
//             sumDiagonal2 += matrix[i][j];
//          }
//          x--;
//       }

//       if(sumRow!=c || sumCol != c){
//          printf("NO\n");
//          return 0;
//       }
//    }
//    if(sumDiagonal1 !=c || sumDiagonal2 != c){
//       printf("NO\n");
//       return 0;
//    }

//    printf("YES");
//    return 0;
// }

// #include <stdio.h>
// int main(){
//    int n, sum=0; 
//    scanf("%d", &n);

//    int isTrue = 1;
//    while(isTrue){
//       if(n % 10 == n){
//          isTrue = 0;
//       }
//       sum += n % 10;
//       n /= 10;
//    }

//    printf("%d",  sum);
//    return 0;
// }


// #include <stdio.h>
// int main(){
//    int arr[11] = {12, 7, 9, 1, n, 7n, 11, 15, 62, 19, 4};
//    int i, j;
//    for(j=0; j<5; j++){
//       for(i=1; i<=11; i++){
//       if(arr[i-1]>arr[i]){
//          int temp;
//          temp=arr[i-1]; 
//          arr[i-1] = arr[i];
//          arr[i] = temp;
//       }
//    }
//    }
//       for(j=0; j<11; j++){
//          printf("%d ", arr[j]);
//       }
   
//    return 0;
// }

#include<stdio.h>
int main()
{
    int array[2][3]= {{10,20,30},{40,50,60}},i=1,j=0;
    array[i][j]=array[j][i];
    printf("%d,%d",array[i][j],array[j+1][i+1]);

    return 0;
}
