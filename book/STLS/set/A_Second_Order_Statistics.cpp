#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   set<int> s;
   for(int i=0; i<tst; i++){
      int a;
      cin>>a;
      s.insert(a);
   }
   if(s.size()>=2){
      
      auto it= next(s.begin(),1);
      cout<<*it<<endl;
   }

   else{
      cout<<"NO";
   }

   return 0;
}