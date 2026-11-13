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

      multiset<long long> ms;

      for(int i=0; i<n; i++){
         long long a;
         cin>>a;
         ms.insert(a);
      }
      long long max = 0;
      for(int i=0; i<k; i++){
      auto it = --ms.end();
      
      max += *it;
      ms.erase(it);
      ms.insert((*it/2));
      
         
      }
      

      cout<<max<<endl;
   }

   return 0;
}