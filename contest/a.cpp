#include <bits/stdc++.h>
using namespace std;

int main() {
   // Optimize standard I/O operations for performance
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   // Initialize modern random engine once outside the loop
   random_device rd;
   mt19937 gen(rd());

   // Define pools for different parts of the key to mimic your example
   string alphanumeric = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
   string special = "-#@$!%&*"; // Pool for the special character section

   uniform_int_distribution<size_t> dist_alpha(0, alphanumeric.size() - 1);
   uniform_int_distribution<size_t> dist_spec(0, special.size() - 1);

   int tst = 5; // Generate 5 encryption keys

   while(tst--) {
      string key = "";

      // 1. Generate first part: 5 random alphanumeric characters (e.g., "S35sa")
      for(int i = 0; i < 5; ++i) {
         key += alphanumeric[dist_alpha(gen)];
      }

      // 2. Add the middle hyphen separator
      key += '-';

      // 3. Generate a special symbol (e.g., "#")
      key += special[dist_spec(gen)];

      // 4. Generate last part: 2 random numbers/alphanumeric characters (e.g., "52")
      for(int i = 0; i < 2; ++i) {
         key += alphanumeric[dist_alpha(gen)];
      }

      cout << key << "\n";
   }

   return 0;
}