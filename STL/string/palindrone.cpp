#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   string s;
   cin>>s;
   string s1 = s;

   reverse(s.begin(), s.end());

   if(s1==s){
      cout<<" is Palandome";
   }
   else{
      cout<<"No";
   }

   return 0;
}