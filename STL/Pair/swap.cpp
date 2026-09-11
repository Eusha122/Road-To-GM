#include <bits/stdc++.h>
using namespace std;

int main() {
    
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   pair<int, int> student(11, 2);
   pair<int, int> shoily(1, 2);
   
   student.swap(shoily);

   cout<<shoily.first<<shoily.second<<endl;


   cout<<(student<shoily)<<endl;

   return 0;
}