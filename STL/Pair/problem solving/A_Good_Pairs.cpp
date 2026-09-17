#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){
      int n;
      cin>>n;

      vector<int> v(n);
      
      
      for(int i=0; i<n; i++){
         cin>>v[i];
      }

      vector<int> v1(v);

      // for(int i=0; i<n; i++){
      //    cout<<v1[i]<< " "<< v[i]<<endl;
      // }
      
      sort(v1.begin(), v1.end());
      if (n==1){

         cout << "1 1\n";
         continue;
      }

      // for(int i=0; i<n; i++){
      //    int small = 0;
      //    if(v1[0]==v[i]){
      //       cout<<i+1<<" ";
      //       small = v1[0];
      //    }
      //    if((v1.back()) == v[i]){
      //       cout<<i+1<<endl;
      //    }
      // } 

      auto it = find(v.begin(), v.end(), v1[0]);
      auto it1 = find(v.begin(), v.end(), *(v1.end()-1));

      if(it != v.end()){
         int index = it-v.begin();
         cout<< index+1<<" ";
      }
      if(it1 != v.end()){
         int index1 = it1-v.begin();
         cout<< index1+1<<endl;
      }
      
   }

   return 0;
}

//Good Pairs — Codeforces 1656A