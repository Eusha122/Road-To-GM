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

      for(int i=0; i<n; i++){
         cin>>v[i];
      }
      for(int i=0; i<n; i++){
         cin>>v1[i];
      }

      int min_c = *min_element(v.begin(), v.end());
      int min_o = *min_element(v1.begin(), v1.end());

      long long  total_move =0;

      for(int i=0; i<n; i++){

         total_move += max((v[i]-min_c),(v1[i]-min_o));
         

      }

      cout<<total_move<<endl;
   }
   

   return 0;
}