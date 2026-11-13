#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;
   while(tst--){

      int a,b,c;
   cin>>a>>b>>c;

   if(abs(a-b) == 1 && abs(b-c)==1){
      cout<<"YES"<<endl;
   }
   else{
      cout<<"NO"<<endl;
   }

   }
   

   return 0;
}