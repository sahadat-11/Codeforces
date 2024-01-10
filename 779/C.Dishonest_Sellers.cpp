//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int mod = 1e9;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
	int n, k; cin >> n >> k; int a[n], b[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) cin >> b[i];
	multimap<int, pair<int, int>> mp;
	//vector<pair<int, pair<int, int>>> v // it is not possible because in vector we can store 1 type;
  for(int i = 0; i < n; i++) {
  	int dif = a[i] - b[i];
  	mp.insert(make_pair(dif , make_pair(a[i], b[i])));
  }
  int cnt = 0;
  ll sum = 0;
	for(auto u : mp) {
	  if(cnt < k) {
	  	int value1 = u.second.first;
	  	sum += value1;
	  	cnt++;
	  }
	  else {
	  	int value1 = u.second.first;
	  	int value2 = u.second.second;
	  	sum += min(value1, value2);
	  }
	}
	cout << sum << "\n";
  return 0;
}