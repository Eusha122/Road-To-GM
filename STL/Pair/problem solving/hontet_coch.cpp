//https://codeforces.com/problemset/problem/1360/B
#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int a;
      cin>>a;
      
      vector<int> v(a);
      for(int i=0; i<a; i++){
         cin>>v[i];
      }

      int min_diff = 1000000;
      for(int i=0; i<a-1; i++){
         for(int j =i+1; j<a; j++){

            if(min_diff>(v[i]-v[j]) && 0<=(v[i]-v[j]) ){
               min_diff =(v[i]-v[j]);
            }
         }
      }

      cout<<min_diff<<endl;
   }
   


   return 0;
}