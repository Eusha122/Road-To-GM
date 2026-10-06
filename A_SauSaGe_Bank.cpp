#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int n,k;
      cin>>n>>k;

      long long ans = pow(2, n - k + 1) + 2 * (k - 1);
      cout<<ans<<endl;
         
      
   }

   return 0;
}