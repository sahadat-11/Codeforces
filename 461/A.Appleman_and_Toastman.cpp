//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n + 1);
   for(int i = 1; i <= n; i++) {
     cin >> a[i];
   }
   sort(a.begin(), a.end());
   int sum = 0;
   for(int i = 1; i < n; i++) {
     sum += (a[i] * (i + 1));
   }
   sum += (a[n] * n);
   cout << sum << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}



//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   ll sum = 0;
   for(int i = 1; i <= n; i++) {
   	 cin >> a[i];
   	 sum += a[i];
   }
   sort(a + 1, a + n + 1);
   if(n >= 2) {
   	 sum += (1ll * (n - 1) * a[n] + 1ll * (n - 1) * a[n - 1]);
   	 for(int i = n - 2; i >= 1; i--) {
   	 	sum += (1ll * i * a[i]);
   	 }
   }
   cout << sum << "\n";
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


#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

const int MAX_N = 3e5 + 5;

ll arr [MAX_N];

int main () {
  ios::sync_with_stdio(false);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n);

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    ans += (ll) (i + 2) * arr[i];
  }
  ans -= arr[n - 1];

  cout << ans << endl;
}
