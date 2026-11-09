#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef string s;
typedef long double ld;
#define LP(i,a,b) for (int i=a; i<b; i++);

int main(){
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   double a,b;
   cin>>a>>b;

   ll a1;
   cin>>a1;



   LP(i,0,a1){
      cout<<1;
   }

   if(abs(a-b)<1e-9){
      cout<<"equal"<<"\n";
     
      
   }

   else{
      cout<<"!="<<"\n";
   }


}