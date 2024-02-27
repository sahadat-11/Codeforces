// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// bool check(int n) {
//   int c = __builtin_popcount(n);
//   if(c == 1) return true;
//   return false;
// }
// void solve() {
//    int n; cin >> n;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    int cnt = 0;
//    for(int i = 0; i < n - 1; i++) {
//    	 for(int j = i + 1; j < n; j++) {
//    	 	if(check(v[i] + v[j])) cnt++;
//    	 }
//    }
//    cout << cnt << "\n";
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
// // O(n * n)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   ll cnt = 0;
   map<int, int > mp;
   for(int i = 0; i < n; i++) {
   	 for(int bit = 0; bit < 31; bit++) {
   	 	int x = (1 << bit);
   	 	int required = x - v[i];
   	 	cnt += mp[required];
   	 }
   	 mp[v[i]]++;
   }
   cout << cnt << "\n";
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
// (n * 31 * log(n))



#include<bits/stdc++.h>

#define ll long long
#define endl '\n'
using namespace std;
map < ll, ll > m;
ll n, ans;
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  cin >> n;
  ll a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    for (ll j = 1; j < 1e10; j *= 2) {
      ans += m[j - a[i]];
    }
    m[a[i]]++;
  }
  cout << ans;
  return 0;
}