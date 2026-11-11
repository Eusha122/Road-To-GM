#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int a,b; cin>>a>>b;

   multiset<int> s;
   for(int i=0; i<a; i++){
      int x;
      cin>>x;
      s.insert(x);

   }

   
   for(int i=0; i<b; i++){
      int a1;
      cin>>a1;
      auto it = s.upper_bound(a1);

      if(it!=s.begin()){
         --it;
         cout<<*it<<endl;
         s.erase(it);
      }
      else{
         cout<<-1<<endl;
      }
   }

   
   return 0;
}   