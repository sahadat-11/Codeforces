//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n), ans;
   for(int i = 0; i < n; i++) cin >> v[i]; 
   sort(v.begin(), v.end());
   //for(auto u : v) cout << u << " "; cout << "\n";
   for(int i = 0; i < n; i++) {
   	if(i == 0 or v[i] != v[i - 1]) {
   	  ans.push_back(v[i]);
   	}
   }
   for(int i = 1; i < n; i++) {
   	if(v[i] == v[i - 1]) {
   	  ans.push_back(v[i]);
   	}
   }
   for(auto u : ans) cout << u << " "; cout << "\n";
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

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	long long T, L, X;
	string S1;
	cin >> T;
	while (T--) {
		cin >> L;
		int freq[105] = {};
		for (int i = 0; i < L; i++) {
			cin >> X;
			freq[X]++;
		}
		for (int i = 0; i <= 100; i++) {
			if (freq[i] > 0)
				cout << i << ' ';
		}
		for (int i = 0; i <= 100; i++) {
			if (freq[i] > 0)
				freq[i]--;
			while (freq[i]--)
				cout << i << ' ';
		}
	}
}

// https://www.youtube.com/watch?v=pbjMKJLkZcw