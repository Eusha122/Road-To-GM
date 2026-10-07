#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      
      long long a,b,c;
      cin>>a>>b>>c;

      int init = abs(a-b);

      if(((a+c)-b)<init){
         cout<<init<<endl;
      }
      else{
         cout<<(a+c)-b<<endl ; 
      }
   }

   return 0;
}