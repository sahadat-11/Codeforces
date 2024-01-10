//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int n, h; cin >> n >> h; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
  ll sum = 0;
  for(int i = 0; i < n; i++) {
  	if(a[i] > h) sum += 2;
  	else sum += 1;
  }
  cout << sum << "\n";
  return 0;
}