#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;
   string s;
   cin>>s;
   int v =0;

   for(int i=0; i<tst-2; i++){
      if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x'){
         v++;
      }
   }

   cout<<v;


   return 0;
}