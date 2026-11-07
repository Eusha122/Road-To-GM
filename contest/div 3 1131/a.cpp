#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int a,b; cin>>a>>b;

      string a1;
      string b1;

      cin>>a1;
      cin>>b1;

      for(int i=0; i<a; i++){
         for(int j=0; j<b; j++){

            if(a1[i]==b1[j]){
               a1.erase(i,1);
               b1.erase(j,1);
               i--;
               a= a1.length();
               b= b1.length();
               break;

            }
         }
      }

      sort(a1.begin(), a1.end());
      if (a1 == "isx" && b1.empty()){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

   }

   return 0;
}