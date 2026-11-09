#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<int> v = {4,2,5,3,5,8,3};
   sort(v.rbegin(),v.rend());

   for(int x : v){
      cout<<x<<" ";
   }
   sort(v.begin(),v.end())

   return 0;
}