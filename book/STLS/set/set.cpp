#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   set<int> s;
   s.insert(1);
   s.insert(19);
   s.insert(15);
   s.insert(10);
   s.insert(1);

   auto it = s.find(10);

   if(it!= s.end()){
      s.erase(it);
   }

   for(auto i=s.begin(); i!=s.end(); i++){
      cout<<(*i)<<" ";
   }

   return 0;
}