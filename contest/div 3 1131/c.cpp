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

      vector<int> v(a);
      for(int i=0;i<a; i++){
         cin>>v[i];
      }

      bool everyone = true;

      for(int i=0; i<a; i++){
         if(v[i]!=1){
            everyone = false;
         }
      }
int sum =0;
for(int i=0; i<a; i++){
               sum += v[i];
         
            }
      if(everyone!=true){

         bool interone = true;
         int inx =0;
         for(int i=1; i<a-1; i++){
            if(v[i]!=1){
               interone = false;
               inx = i;
               break;
            }

         }
         
         if(interone == true){
            
           
         
            
            cout<<sum-(a-1)<<endl;
         }

         else if (interone == false){
            cout<<sum-1<<endl;
         }

      }

      else{
         cout<<-1<<endl;
      }
      

      
   }

   return 0;
}