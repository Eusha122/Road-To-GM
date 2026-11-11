#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){

      string s; cin>>s;
      int a,b; cin>>a>>b;
      vector<int> v(a);
      for(int i=0;i<a; i++){
         cin>>v[i];
      }

      bool flag = false;
      int index =0;
      for(int i=0; i<b; i++){
         int x,y;cin>>x>>y;

         auto it =find(v.begin(), v.end(),x);
         if(it!=v.end()){
            index = it-v.begin();
         }

         for(int i=0; i<(a-index); i++){
            if(b==v[i]){
               flag = true;
               break;
            }

         }
         
      }

      if(flag = true){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }

      
      

   }

   return 0;
}