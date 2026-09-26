#include <bits/stdc++.h>
using namespace std;

void binarry_search(){
   
   int t;
   cin>>t;

   vector<int> v(t);
   int target;
   for(int i=0; i<t; i++){
      cin>>v[i];
   }
   cin>>target;

   sort(v.begin(), v.end(), [](auto a, auto b){
      return a<b;
   });
   int left =0; int right = t-1;

   int count_step = 0;
   while(left<right){
      int middle = ((left+right)/2);
      if(v[middle]<target){
         left = middle+1;
         count_step++;
      }
      else{
         right = middle;
         count_step++;
      }
   }
   if(v[left]== target){
      cout<<"found at index "<<left <<endl;
   }
   else{
      cout<<"Not found"<<endl;
   }

   cout<<count_step;
}

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   binarry_search();

   return 0;
}