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
      sort(v.begin(), v.end());

      vector<int> sum(a/2);

      for(int i=0; i<a; i+=2){

         pair<int,int> p;
         
         p.first = v[i];
         p.second =v[i+1];

         int a1 = abs(p.first - p.second);
         sum.push_back(a1);
      }
      

      cout<<sum.back()<<endl;
   }

   return 0;
}