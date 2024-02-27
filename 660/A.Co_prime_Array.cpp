//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> k;
    for(int i = 0; i < n - 1; i++) {
      if(__gcd(a[i], a[i + 1]) == 1) {
        k.push_back(a[i]);
      }
      else {
        k.push_back(a[i]);
        k.push_back(1);
      }
    }
    k.push_back(a[n - 1]);
    cout << k.size() - n << "\n";
    for(auto u : k) cout << u << " ";
	return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i]; 
   vector<int> ans;
   for(int i = 1; i < v.size(); i++) {
     if(__gcd(v[i], v[i - 1]) != 1) {
       v.insert(v.begin() + i, 1);
     } 
   }
   cout << v.size() - n << "\n";
   for(auto u : v) cout << u << " "; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
//   return 0;
// }

// // // https://www.geeksforgeeks.org/vector-insert-function-in-cpp-stl/



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
const int N = 1e3 + 8;
bitset<N>f;
vector<int> prime;
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i]; 
   for(int i = 1; i < v.size(); i++) {
     if(__gcd(v[i], v[i - 1]) != 1) {
       for(int j = 0; j < (int)prime.size(); j++) {
        if(v[i] % prime[j] and v[i - 1] % prime[j]) {
          v.insert(v.begin() + i, prime[j]); break;
        }
       }
     } 
   }
   cout << v.size() - n << "\n";
   for(auto u : v) cout << u << " "; 
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  f[0] = f[1] = true; 
   for(int i = 4; i <= N; i += 2) f[i] = true;
   for(int i = 3; i * i <= N; i += 2) {
      if(!f[i]) {
      for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
     }
   }
   for(int i = 2; i <= N; i++) {
      if(!f[i]) prime.push_back(i);
   }
   //cout << prime.size() << '\n';
  while(t--) {
    solve();
  }
  return 0;
}
 
// https://prnt.sc/xZ-AO9I2jrop
// https://prnt.sc/Mqf2K7nIE6aO