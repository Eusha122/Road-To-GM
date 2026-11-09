#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   vector<int> v(5);
   
   for(int i=0; i<v.size(); i++){
      cin>>v[i];
   }

   ll n = 1LL * v.size()*(*v.begin()+*(v.end()-1)) /2;
   cout<<n;
   


   

   return 0;
}