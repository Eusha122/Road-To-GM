#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a;
   cin>>a;
   while(a--){
      int h,n;
      cin>>h>>n;

      int cnt =0;

      if(h<=n){
         cout<<"-1"<<endl;
      }

      else{
         for(int i=n; i>0; i--){

            if(h<=n){
               break;
            }
            h-=2;
               n--;
            cnt ++;
         }

         cout<<cnt<<endl;
      }

      


   }

   return 0;
}