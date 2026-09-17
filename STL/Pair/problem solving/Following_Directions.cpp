#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int a; cin>>a;
      string v;
      cin>>v;

      pair<int,int> p= {0,0};
      pair<int, int> candy = {1,1};

      

      for(int i=0; i<v.length(); i++){
         
         if(v[i]=='U') p.second++;
         else if(v[i]=='D') p.second--;
         else if (v[i]=='L')p.first--;
         else if (v[i] == 'R') p.first++;
      }

      cout<<p.first<<" "<<p.second<<endl;

      // if(p==candy){
      //    cout<<"YES"<<endl;
      // }

      // else cout<<"NO"<<endl;
      
      
   }

   return 0;
}
//https://codeforces.com/problemset/problem/1791/B