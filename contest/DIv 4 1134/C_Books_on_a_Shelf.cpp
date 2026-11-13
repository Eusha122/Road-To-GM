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

      vector<int> d(a);

      vector<int> v(a);

      for(int i=0; i<a; i++){
         cin>>d[i];
      }

      sort(d.begin(), d.end());

vector<int> leftSide, rightSide, extra;

for(int i = 0; i < a; ) {
    int j = i;

    while(j < a && d[j] == d[i])
        j++;

    leftSide.push_back(d[i]);

    if(j - i >= 2)
        rightSide.push_back(d[i]);

    for(int k = i + 2; k < j; k++)
        extra.push_back(d[i]);

    i = j;
}

v.clear();

for(int x : leftSide)
    v.push_back(x);

for(int x : extra)
    v.push_back(x);

reverse(rightSide.begin(), rightSide.end());

for(int x : rightSide)
    v.push_back(x);

long long total = leftSide.size() + rightSide.size();

cout << total << '\n';

for(int x : v)
    cout << x << " ";

cout << '\n';
      
   }

   return 0;
}