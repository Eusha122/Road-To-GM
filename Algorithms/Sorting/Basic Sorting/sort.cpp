#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<pair<int,int>> vp ={
      {2,4},
      {2,5},
      {0,3}
   };


   
   sort(vp.begin(), vp.end(), [](auto a, auto b){
      return a.secound>b.secound;
   });

   for(auto i : vp){
      cout<<i.first<<" " << i.second<<endl;
   }

   return 0;
}