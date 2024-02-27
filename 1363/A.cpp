//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int odd = 0, even = 0;
   bool flag;
   for(auto u : v) {
   	 if(u % 2) odd++;
   	 else even++;
   }
   if(odd == n) {
   	 if(x % 2) flag = true;
   	 else flag = false;
   }
   else if(even == n) {
   	  flag = false;
   }
   else if(n == x) {
   	 if(odd % 2) flag = true;
   	 else flag = false;
   }
   else {
   	 flag = true;
   }
   if(flag) cout << "Yes\n";
   else cout << "No\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x; cin >> n >> x;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int even = 0, odd = 0; bool flag = true;
   for(int i = 0; i < n; i++) {
    if(v[i] % 2) odd++;
    else even++; 
   }
   if(n == x) {
     if(!odd or odd % 2 == 0) flag = false;
   }
   else {
   	if(x % 2 == 0) {
   	  if(!even) flag = false;
   	}
   	if(even == n) {
   	  flag = false;
    }
   	else {
   	  if(!odd) flag = false;
   	}
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}