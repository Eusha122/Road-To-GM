#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<pair<int,int>> v = {
   {3, 10},
   {1, 20},
   {3, 5},
   {2, 20},
   {1, 7}
   };

   sort(v.begin(), v.end(), [](auto a, auto b){
      if(a.first!= b.second){
         return a.first<b.first
      };
      
      return a.first>b.first;
   });


   return 0;
}