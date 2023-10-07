//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int i = 0, j = n - 1;
  ll sum1 = 0, sum2 = 0, mx = 0;
  while(i <= j) {
  	 if(sum1 < sum2) {
  	 	sum1 += a[i]; i++;
  	 }
  	 else if(sum1 > sum2) {
  	 	sum2 += a[j]; j--;
  	 }
  	 if(sum1 == sum2) {
  	 	mx = max(mx, sum1);
  	 	sum1 += a[i]; i++;
  	 }
  	// cout << sum1 << " " << sum2 << endl;
  }
  cout << mx << "\n";
  return 0;
}
