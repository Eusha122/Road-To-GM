#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int x;
   vector<int> v;
   while(cin>>x){
      v.push_back(x);
   }
   // reverse(v.begin(), v.end());

   for(int i=0; i<v.size(); i++){
      for(int j=0; j<v.size()-1; j++){
         if(v[j]>v[i]){
            swap(v[i],v[j]);
         }
      }
   }

   for(int x : v){
      cout<<x<<endl;
   }

   return 0;
}