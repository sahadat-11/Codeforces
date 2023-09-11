//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    vector<int> k;
    for(int i = 0; i < n - 1; i++) {
      if(__gcd(a[i], a[i + 1]) == 1) {
        k.push_back(a[i]);
      }
      else {
        k.push_back(a[i]);
        k.push_back(1);
      }
    }
    k.push_back(a[n - 1]);
    cout << k.size() - n << "\n";
    for(auto u : k) cout << u << " ";
	return 0;
}