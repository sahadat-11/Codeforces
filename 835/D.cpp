//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 5005, mod = 1e9 + 7;
//#define int long long
int dp[N][N], is_pal[N][N];
int n;
string s;
int is_palindrome(int l, int r) {
	if(l > r) return true;
	int &ans = is_pal[l][r];
	if(ans != -1) return ans;
	return ans = (s[l] == s[r]) and is_palindrome(l + 1, r - 1);
}

int func(int l, int r) {
	if(!is_palindrome(l, r)) return 0;
	if(l == r) return 1;
	int &ans = dp[l][r];
	if(ans != -1) return ans;
	ans = 1;
    int left_half_endpoint = (l + r) / 2;
    if((r - l + 1) % 2 == 1) {
    	left_half_endpoint--;
    }
    if(is_palindrome(l, left_half_endpoint)) {
      ans += func(l, left_half_endpoint);
    }
    return ans;
}
long long cnt[N];
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cin >> s;
  n = s.size();
  memset(dp, - 1, sizeof dp);
  memset(is_pal, - 1, sizeof is_pal);
  for(int i = 0; i < n; i++) { // all substring
  	for(int j = i; j < n; j++) {
  		cnt[func(i, j)]++;
  	}
  }
  for(int i = n; i >= 1; i--) {
  	cnt[i] += cnt[i + 1];
  }
  for(int i = 1; i <= n; i++) {
  	cout << cnt[i] << " ";
  }
  return 0;
}