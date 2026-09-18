#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<int> v = {2,3,5,5,1,5,1,5,6,3,3,3,46,547,2352};

   sort(v.begin(), v.end(), greater<int>());

   for(auto i : v){
      cout<<i<<endl;
   }

   return 0;
}