#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;
   while(tst--){
      
      int n;
      cin>>n;
      string s;
      cin>>s;
      int total =0;

      int c ='R';
      for(int i=0; i<n; i++){
         
         if( c !=s[i]){
            total++;
            c = s[i];
         }
         if(c=='R'){
            c ='B';
         }
         else{
            c='R';
         }
      }
      cout<<total<<endl;
   }

   return 0;
}