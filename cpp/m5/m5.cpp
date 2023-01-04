#include <bits/stdc++.h>
using namespace std;

class Array{
   private:
      int *arr;
      int cap;
      int sz;
      void increaseSize(){
         cap = cap *2;
         int *temp = new int[cap];
         for(int i=0; i<sz; i++){
            temp[i] = arr[i];
         }
         delete [] arr;
         arr = temp;
      }
   public:
      Array(){
         arr = new int[1];
         cap = 1;
         sz = 0;
      }
      void pushBack(int n){
         if(sz==cap){
            increaseSize();
         }
         arr[sz] = n;
         sz++;
      }
      void popBack(){
         arr[sz] = 0;
         sz--;
      }
      void print(){
         for(int i=0; i<sz; i++){
            cout << arr[i] << " ";
         }
         cout << endl;
      }
      int getSize(){
         cout << sz << endl;
      }
      void insert(int idx, int val){
         int indx = idx-1 ;
         if(cap+1 <= sz){
            increaseSize();
         }
         int *temp = new int[cap];
         
         for(int i=0; i<indx; i++){
            temp[i] = arr[i];
         }
         temp[indx] = val;
         for(int i=indx+1; i<=sz; i++){
            temp[i] = arr[i-1];
         }
         delete [] arr;
         arr = temp;
         sz++;
      }
      void remove(int idx){
         int indx = idx-1 ;
         int *temp = new int[cap];
         
         for(int i=0; i<indx; i++){
            temp[i] = arr[i];
         }
        for(int i=indx; i<sz; i++){
            temp[i] = arr[i+1];
         }
         delete [] arr;
         arr = temp;
         sz--;
      }
      int getElement(int idx){
         int indx = idx -1 ;
         if(indx<sz){
            cout << arr[indx] << endl ;
         }else{
            cout << "Outbound" << endl;
         }
      }
};


int main(){
   Array myarr;
   myarr.pushBack(10);
   myarr.pushBack(20);
   myarr.pushBack(30);
   myarr.print();

   // myarr.getSize();

   // cout << "after pop back "<<endl;
   // myarr.popBack();
   // myarr.print();
   // myarr.getSize();
   
   // cout << "after insert "<<endl;
   // myarr.insert(1, 99);
   // myarr.print();
   // myarr.getSize();

   // cout << "after remove "<<endl;
   // myarr.remove(3);
   // myarr.print();
   // myarr.getSize();

   // cout << "get element "<<endl;
   // myarr.getElement(2);


   return 0;
}