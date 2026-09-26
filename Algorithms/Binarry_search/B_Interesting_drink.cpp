#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int size;
   cin>>size;

   vector<int> v(size);

   for(int i=0; i<size; i++){
      cin>>v[i];
   }
   vector<int> v1 = v;

   sort(v.begin(), v.end(), [](auto a, auto b){
      return a<b;
   });

   int tst;
   cin>>tst;

 

   while(tst--){
      int q;
      cin>>q;

      int ans = upper_bound(v.begin(),v.end(),q) - v.begin();
      // auto it = lower_bound(v.begin(), v.end(), q);
      // int it1 =0;

      // if (it != v.end() && *it == q) {
      //    it1= *it;
      // } 
      // else if (it != v.begin()) {
      //    it1 = *(--it);
      // } 

      
      
      // int fn = find(v.begin(), v.end(),it1) - v.begin();

      // int left =0; int right = size-1;
      // while(left<right){
      //    int mid = (left+ right) /2;
      //    if(v[mid]<q){
      //       left = mid+1;
      //    }
      //    else{
      //       right = mid;
      //    }
      // }

      cout<<ans<<endl;
   }

   return 0;
}