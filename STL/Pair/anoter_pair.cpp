#include <bits/stdc++.h>
using namespace std;
using shoily = std::string; 
int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   pair<shoily, shoily> uss[n];
   for(int i=0; i<n; i++){
      cin>>uss[i].first>>uss[i].second;
   }

   for(int i=0; i<n; i++){
      cout<<uss[i].first<<" "<<uss[i].second<<endl;
      uss[i].second=="Shoily" ? cout<<"I love you" : cout<<"Fuck you"<<"\t"<<"\n";
   }

  

   


   return 0;
}