#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   for(int i=1; i<=5; i++){
      for(int j=0; j<i; j++){
         cout<<"*";
      }
      cout<<endl;
   }

   return 0;
}