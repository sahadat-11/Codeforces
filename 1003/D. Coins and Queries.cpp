//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 3e5 + 7;
int a[N];
int n, k;
int rec(int i, sum) {
	if(i == n + 1) {
		if(sum > k) return inf;
		return 
	}
	int ans = (i , sum);
	ans = max(ans, i + 1, sum + a[i]);
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
   cin >> n >> k;
  for(int i = 1; i <= n; i++) {
  	cin >> a[i];
  }
  cout << rec(1, 0);
  return 0;
}
