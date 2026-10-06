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
      for(int i=0; i<a; i++){
         cin>>v[i];

      }

      
      
      int min_dif = *min_element(v.begin(), v.end());

      cout<<a-min_dif<<endl;

   }

   return 0;
}