//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int cnt_zero(int n) {
  int cnt = 0;
  while(n % 10 == 0) {
  	cnt++;
  	n /= 10;
  }
  return cnt;
}
int cnt_digit(int n) {
  int cnt = 0;
  while(n) {
  	cnt++;
  	n /= 10;
  }
  return cnt;
}
void solve() {
   int n, m; cin >> n >> m;
   vector<int> v(n), zero(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   int digit = 0;
   for(int i = 0; i < n; i++) {
   	digit += cnt_digit(v[i]);
   	zero[i] = cnt_zero(v[i]);
   }
   sort(zero.rbegin(), zero.rend());
   for(int i = 0; i < n; i += 2) {
     digit -= zero[i];
   }
   if(digit >= (m + 1)) {
   	cout << "Sasha\n";
   }
   else {
   	cout << "Anna\n";
   }
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

// https://www.youtube.com/watch?v=LUhY4XE8VaY