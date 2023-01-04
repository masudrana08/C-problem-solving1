// Answer 1: 
// #include <stdio.h>
// int main(){
//    int a, b, max;
//    scanf("%d %d", &a, &b);
//    max = a > b ? a : b;
//    printf("%d\n", max);
//    return 0;
// }

// Answer 2
// #include <stdio.h>
// int main(){
//    long long int n,i, temp, a=0, b=1;
//    scanf("%lld", &n);
//    printf("0 1 ");
//    for(i=2; i<n; i++){
//       printf("%lld ", a+b);
//       temp = a;
//       a=b;
//       b += temp;
//    }
//    return 0;
// }


// Answer 3 
// #include <stdio.h>
// void passByValue(int n){
//    n *= 2;
// }
// void passByReference(int* n){
//    *n = *n * 2;
// }

// int main(){
//    int x = 10;
//    printf("Initial value %d\n", x);
//    passByValue(x);
//    printf("After changed from pass by value = %d\n",x);
//    passByReference(&x);
//    printf("After changed from pass by reference = %d\n",x);
//    return 0;
// }


// #include <stdio.h>
// #include <string.h>
// int main(){
//    int i, j;
//    char str[100];
//    scanf("%s", str);

//    for(i=0; i<strlen(str)-1; i++){
//      for(j=0; j<strlen(str)-1; j++){
//       if(str[j]>str[j+1]){
//          char temp = str[j];
//          str[j] = str[j+1];
//          str[j+1] = temp;
//       }
//      }
//    }
//    printf("%s", str);
//    return 0;
// }


// Answer 5 
// #include <stdio.h>
// #include <stdlib.h>
// int main(){
//    int n, i;
//    scanf("%d", &n);
//    int* arrayPointer;
//    arrayPointer = (int*) malloc(n * sizeof(int));

//    for(i=0; i<n; i++){
//       scanf("%d", arrayPointer+i);
//    }
//    for(i=0; i<n; i++){
//       printf("%d\n", *(arrayPointer+i));
//    }
//    free(arrayPointer);
//    return 0;
// }

// Answer 6:

// // Function with no arguments and no return value
// void showError(){
//    printf("Something Wrong");
// }
// // Function with no arguments and a return value
// int pi(){
//    return 3.14159;
// }
// // Function with arguments and no return value
// int mulBy2(int *x){
//   *x = *x * 2;
// }
// // Function with arguments and a return value
// int sum(int x, int y){
//    return x+y;
// }


// Answer 7 
// #include <stdio.h>
// int main(){
//    int m, n, i, j;
//    scanf("%d%d",  &m, &n);
//    int arr[m][n];
//    int arr2[m][n];

//    for(i=0; i<m; i++){
//       for(j=0; j<n; j++){
//          scanf("%d", &arr[i][j]);
//       }
//    }
//    for(i=0; i<m; i++){
//       for(j=0; j<n; j++){
//          scanf("%d", &arr2[i][j]);
//       }
//    }
//    printf("\n");
//    for(i=0; i<m; i++){
//       for(j=0; j<n; j++){
//          printf("%d ", arr[i][j]+arr2[i][j]);
//       }
//       printf("\n");
//    }
//    return 0;
// }

// Answer 8: 
// #include <stdio.h>
// struct Student{
//    char name[50];
//    int roll;
//    int mark;
// };
// int main(){
   // struct Student s1;
//    printf("Enter information:\n");
//    printf("Enter name: ");
//    scanf("%s", &s1.name);
//    printf("Enter roll number: ");
//    scanf("%d", &s1.roll);
//    printf("Enter mark: ");
//    scanf("%d", &s1.mark);

//    printf("\nDisplaying Information:\n");
//    printf("Name: %s\n", s1.name);
//    printf("Roll number: %d\n", s1.roll);
//    printf("Marks: %d\n", s1.mark);
//    return 0;
// }


#include <stdio.h>
int Main() {
   int a, b, c;
   a*b = c;
    return 0;
}

int fact(int num) 
{ 
	//this is called base case 
	//and if we reach 1 then we will going to stop this recursion 
	if(num==1) 
		return 1; 
	else 
		return num * fact(num-1); //recursive case 
} 