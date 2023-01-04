// #include <stdio.h>
// int main(){
//    FILE *inputFile;
//    inputFile = fopen("input.txt", "r");
//    FILE *outputFile;
//    outputFile = fopen("output.txt", "w");

//    if(inputFile == NULL) {
//       printf("No file found\n");
//       return 0;
//    }
   
//    while(1){
//       char ch = fgetc(inputFile);
//       if(ch == EOF) break;
//       printf("%c", ch);
//       fputc(ch, outputFile);
//    }
//    return 0;
// }


#include <stdio.h>
int main(){
   FILE *inputFile;
   FILE *outputFile;
   inputFile = fopen("input.txt", "r");
   outputFile = fopen("output.txt", "w");

   int n, i, sum=0; 
   fscanf(inputFile, "%d", &n);
   for(i=0; i<n; i++){
      int a;
      fscanf(inputFile, "%d", &a);
      sum += a;
   }
   fprintf(outputFile, "Sum is %d", sum);
   fprintf(outputFile, "Sum is %d", sum);
   return 0;
}