//https://codeforces.com/problemset/problem/1971/A
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;

   while(n--){
      int a,b;
      cin>>a>>b;

      pair<int, int> p;
      p.first = a;
      p.second =b;

      

      if(p.first<p.second){
         cout<<p.first<<" "<<p.second<<endl;
      }
      else{
         cout<<p.second<<" "<<p.first<<endl;
      }
   }
   

   return 0;
}