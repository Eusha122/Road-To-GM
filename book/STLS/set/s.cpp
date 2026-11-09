#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int x;
   cin>>x;

   set<int> s;
   
   for(int i=0; i<x; i++){
      int a;
      cin>>a;
      s.insert(a);
   }

   cout<<s.size();

   return 0;
}