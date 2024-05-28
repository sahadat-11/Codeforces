//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, a, b; cin >> n >> a >> b; int arr[n];
  for(int i = 0; i < n; i++) cin >> arr[i];
  int one = 0, two = 0;
  for(int i = 0; i < n; i++) {
  	if(arr[i] % 2) one++;
  	else two++;
  }
  int ans = 0;
  if(b >= two) {
  	b -= two;
  	a += b * 2;
  }
  else {
  	ans = two - b;
  	ans *= 2;
  }
  ans += (one - a);
  cout << max(ans, 0) << "\n";
  return 0;
}