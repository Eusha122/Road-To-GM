#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;
   while(tst--){
      string s;
      cin>>s;
      
      int size1 = s.size()-1;

      if(s.size()<11){
         cout<<s<<endl;
      }
      
      
      
      else{
         cout<<s[0]<<s.size()-2<<s[size1]<<endl;
      }
      
   }

   return 0;
}