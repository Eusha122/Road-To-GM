#include<bits/stdc++.h>
using namespace std;

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int n;
   cin>>n;
   pair<string, int> student[n];

   for(int i=0; i<n; i++){
      
      string name;
      int roll;
      cin>>name>>roll;

      student[i].first = name;
      student[i].second = roll;

   }

   for(int i=0; i<n; i++){
      cout<<i<<" "<<student[i].first<< " "<<student[i].second<<endl;

   }

   return 0;
}