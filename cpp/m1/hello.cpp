// #include <iostream>
// using namespace std;
// int main(){
//    freopen("input.txt", "r", stdin);
//    freopen("output.txt", "w", stdout);
//    string s;
//    // cin >> s;
//    getline (cin, s);
//    cout << s << endl;

//    return 0; 
// }

#include <iostream>
#include <fstream>
using namespace std;
int main(){
   ifstream s1, s2;
   ofstream o1;
   s1.open("input.txt");
   s2.open("input2.txt");
   o1.open("output.txt");
   string s, t;
   s1 >> s;
   s2 >> t;
   o1 << s+t;

   return 0; 
}