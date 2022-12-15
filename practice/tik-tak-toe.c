#include <stdio.h>
#include <stdbool.h>
int whoIsWon(int arr[][4], int n){
   int i;
   for(i=1; i<=n; i++){
      if(arr[i][1]==arr[i][2] && arr[i][2] == arr[i][3] && arr[i][1] != -1)return arr[i][1];
      if(arr[1][i]==arr[2][i] && arr[2][i] == arr[3][i] && arr[1][i] != -1) return arr[1][i];
   }
   if(arr[1][1] == arr[2][2] && arr[2][2] == arr[3][3] && arr[1][1] != -1) return arr[1][1];
   if(arr[1][3] == arr[2][2] && arr[2][2] == arr[3][1] && arr[1][3] != -1) return arr[1][3];
   return -1;
}

void printGrid(int arr[][4], int n){
   int i, j;
   for(i=1; i<=n; i++){
      for(j=1; j<=n; j++){
         
         if(arr[i][j]==1)printf(" X ");
         if(arr[i][j]==2)printf(" O ");        
         if(arr[i][j]==-1)printf("   ");  
         if(j<n) 
            printf("|");
         else 
            printf("\n");     
      }
      if(i<n) printf("-------------\n");
   }
}

int main(){
   int i, j;
   int arr[4][4];
   bool player1 = true;
   bool player2 = false;

   for(i=1; i<=3; i++){
      for(j=1; j<=3; j++){
         arr[i][j] = -1;
      }
   }
   
   int row, col;
   while(true){
      printf("\n");
      printGrid(arr, 3);
      if(whoIsWon(arr, 3)==1){
         printf("Player 1 is win\n");
         break;
      }
      if(whoIsWon(arr, 3)==2){
         printf("Player 2 is win\n");
         break;
      }

      if(player1){
         printf("Player 1 ( X ): ");
         scanf("%d%d", &row, &col);
         if(arr[row][col] == -1){
            arr[row][col] = 1;
            player1 = false;
            player2 = true;
         }else {
            printf("\nInvalid Input!\n");
          }
         
      }else{
         printf("Player 2 ( O ): ");
         scanf("%d%d", &row, &col);
         if(arr[row][col] == -1){
            arr[row][col] = 2;
            player1 = true;
            player2 = false;
          }else {
            printf("\nInvalid Input!\n");
          }
      }
   }

   return 0;
}


