#include <bits/stdc++.h>
using namespace std;

class Student{
   public:
      string name;
      int roll;
   Student(){};
   Student(string s, int r){
      name = s;
      roll = r;
   }
   printResult(){
      cout << name << " " << roll << endl;
   }
};

bool comp(Student a, Student b){
   return a.roll < b.roll;
}
// Dynamic object creation
int main(){
   vector <Student> s;
   for(int i=10; i>=1; i--){
      s.push_back(Student("masud", i));
   }
   sort(s.begin(), s.end(), comp);
   for(int i=0; i<10; i++){
      s[i].printResult();
   }
   return 0;
}
