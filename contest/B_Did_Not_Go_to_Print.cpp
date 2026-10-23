#include<bits/stdc++.h>
using namespace std;

int main(){

   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   int tst;
   cin>>tst;

   while(tst--){

      int doc;
      cin>>doc;

      stack<int> s;

      string s1;
      cin>>s1;
      vector<string> v(doc, "notdone");

      

      for(int i=0; i<doc;i++){

         if(s1[i] == '3'){
            v[i] = "done";

         }

         else if(s1[i]=='1'){
            s.push(i+1);
         }
         else if(s1[i]=='2'){
            if(!s.empty()){
               v[s.top()-1] = "done";
               s.pop();
            }
            else{
               v[i] = "done";
            }
            
         }

         

      }

      int cnt = count(v.begin(), v.end(), "notdone");

      cout<<cnt<<endl;

      for(int i=0; i<v.size(); i++){
         if(v[i]== "notdone"){
            cout<<i+1<<" ";
         }

      }
      
      cout<<"\n";



   }
}