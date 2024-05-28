//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
 int n; cin >> n; int a[n];
 for(int i = 0; i < n; i++) cin >> a[i];
 map<int, int > mp;
 for(int i = 0; i < n; i++) {
 	mp[a[i]]++;
 }
 // for(auto u : mp) {
 	// cout << u.first << " " << u.second << endl;
 // }
 // cout << endl;
 vector<int> v1, v2;
 bool flag = true;
 for(auto u : mp) {
 	if(u.second >= 3) flag = false;
 	if(u.second == 1) v1.push_back(u.first);
 	if(u.second == 2) {
 		v1.push_back(u.first);
 		v2.push_back(u.first);
 	}
 }
 if(!flag) cout << "NO\n";
 else {
 	cout << "YES\n";
 	sort(v1.begin(), v1.end());
 	sort(v2.rbegin(), v2.rend());
 	cout << v1.size() << "\n";
 	for(auto u : v1) cout << u << " "; cout << "\n";
 	cout << v2.size() << "\n";
 	for(auto u : v2) cout << u << " ";
 }
  	 
  return 0;
}