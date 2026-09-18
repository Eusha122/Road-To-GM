#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   vector<int> v(n);

   for(int i=0 ; i<n; i++){
      cin>>v[i];
   }

   sort(v.begin(), v.end(), [](auto a, auto b){
      return a<b;
   });

   int min_diff =10000000;
   for(int i=0 ; i<n-1; i++){

      
      if(abs(v[i]-v[i+1]<min_diff)){
         min_diff = abs(v[i]-v[i+1]);
      }



   }

   cout<<min_diff;

   return 0;
}