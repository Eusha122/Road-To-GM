#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a;
   cin>>a;

   while(a--){
      int x,y,z; cin>>x>>y>>z;

      int total = x+y+z;

      
      
      string s = "RPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPSRPS";

      string s1;
      for(int i=0; i<total; i++){

         if(x>=y && x>=z){
         cout<<"P";
         
         }

         else if(y>=x&& y>z){
            cout<<"R";
            
         }
         else{
            cout<<"S";
            
         }
      }

      cout<<endl;

   }

   return 0;
}