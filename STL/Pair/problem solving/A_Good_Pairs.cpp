#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int n;
      cin>>n;

      vector<int> v(n);
      vector<int> v1(n);
      v1 = v;

      cout<<v1[1];

      for(int i=0; i<n; i++){
         cin>>v[i];
      }

      sort(v.begin(), v.end());

      cout<<*v.begin()<<" "<<*(v.end()-1)<<endl;
   }

   return 0;
}