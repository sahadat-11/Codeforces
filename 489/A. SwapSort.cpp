//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  	b[i] = a[i];
  }
  sort(b, b + n);
  cout << n << "\n";
  for(int i = 0; i < n; i++) {
  	bool f = true;
  	for(int j = i; j < n; j++) {
  		if(b[i] == a[j] and f) {
  			cout << i << " " << j << "\n";
  			f = false;
  			swap(a[i], a[j]);
  		}
  	}
  }
  return 0;
}