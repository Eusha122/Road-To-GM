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

      int big = *max(v.begin(), v.end());
      cout<<big<<endl;

      // int sum =0;
      // if(v.size()>2){
         
      //    for(int i=0; i<a; i++){
      //       sum += v[i];
      //    }
      //    cout<<sum-1<<endl;
      // }

      // else{
      //    cout<<-1<<endl;
      // }

      
   }

   return 0;
}