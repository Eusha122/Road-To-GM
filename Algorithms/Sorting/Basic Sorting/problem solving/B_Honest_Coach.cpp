#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int s;
   cin>>s;

   while(s--){
      int a;
      cin>>a;
      vector<int> v(a);
      for(int i=0; i<a; i++){
         cin>>v[i];
      }

      sort(v.begin(), v.end(), [](auto k, auto t){
         return k<t;
      });


      int min = 9999999;
      for(int i=0; i<a-1; i++){
         if(abs((v[i]-v[i+1]))<min){
            min = abs(v[i]-v[i+1]);
         }
      }

      cout<<min<<endl;
   }

   return 0;
}