#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s;
   getline(cin,s);

   set<char> s1;
   
   for(int i=0; i<s.size();i++){

      s1.insert(s[i]);

   }
   s1.erase(' ');
   s1.erase(',');
   s1.erase('{');
   s1.erase('}');
   int total =0;
   for(char c: s1){
      
      total++;
   };
   cout<<total;

   return 0;
}