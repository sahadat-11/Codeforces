// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n, k; cin >> n >> k;
//    vector<int> v;
//    for(int i = 2; i * i <= n; i++) {
//      if(n % i == 0) {
//        while(n % i == 0 and k > 1) {
//          v.push_back(i);
//          k--; n /= i;
//        }
//      }
//    }
//    v.push_back(n);
//    if(k == 1 and n > 1) {
//      for(auto u : v) cout << u << " ";
//    }
//    else {
//     cout << "-1\n";
//    }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, k; cin >> n >> k;
   int y = n;
   vector<int> primes_facts;
   for(int i = 2; i * i <= n; i++) {
     if(n % i == 0) {
       while(n % i == 0) {
         primes_facts.push_back(i);
         n /= i;
       }
     }
   }
   if(n > 1) {//if now n is also prime greater than sqaureroot
     primes_facts.push_back(n);
   }
   if(primes_facts.size() < k) cout << "-1\n";
   else {
     ll x = 1;
     for(int i = 0; i < k - 1; i++) {
       x *= primes_facts[i];
       cout << primes_facts[i] << " ";
     }
     cout << y / x << "\n";
   }
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}