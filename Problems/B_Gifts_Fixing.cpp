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
      vector<int> v1(a);

      for(int i=0; i<a; i++){
         cin>>v[i];
      }
      for(int i=0; i<a; i++){
         cin>>v1[i];
      }

      int min_0 = *min_element(v.begin(), v.end());
      int min_c = *min_element(v1.begin(), v1.end());

      long long t_m =0;
      for(int i=0; i<a; i++){
         t_m += max((v[i]-min_0), (v1[i]-min_c));
      }

      cout<<t_m<<endl;

   }

   return 0;
}