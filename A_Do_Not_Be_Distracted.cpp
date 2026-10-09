#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int a;
      cin>>a;

      string s;
      cin>>s;

      vector<char> seen;
      bool valid = false;
      for(int i=1; i<a; i++){

         
         seen.push_back(s[0]);
         
         
         
         if(s[i]!=s[i-1]){
            
            auto it = find(seen.begin(), seen.end(), s[i]);
            if(it!=seen.end()){
               valid = true;
               break;
            }

            else{
               seen.push_back(s[i]);
            }
         }
         
               
      }
      if(valid==true){
            cout<<"NO"<<endl;
         }
         else{
            cout<<"YES"<<endl;
         }


   }

   return 0;
}