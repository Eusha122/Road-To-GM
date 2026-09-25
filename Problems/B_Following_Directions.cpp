#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int x;
   cin>>x;

   while(x--){
      int s;
      cin>>s;

      string s1;
      cin>>s1;

      pair<int,int>p= {0,0};

      
      for(int i=0; i<s; i++){
         
         if(p.first == 1 && p.second ==1){
            break;
            
         }
         if(s1[i] == 'U') p.second++;
         if(s1[i] == 'D') p.second--;
         if(s1[i] == 'L') p.first--;
         if(s1[i] == 'R') p.first++;
         

      }

      if(p.first==1 &&p.second==1){
         cout<<"YES"<<endl;
      }
      else{
         cout<<"NO"<<endl;
      }
      
   }

   

   return 0;
}