//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
       int n; cin >> n; int a[n];
       for(int i = 0; i < n; i++) {
         cin >> a[i];
       }
       map<int, int> mp;
       vector<int> v;
       for(int i = n - 1; i >= 0; i--) {
         if(mp[a[i]] == 0) {
           v.push_back(a[i]);
         }
         mp[a[i]]++;
       }
      cout << v.size() << "\n";
      reverse(v.begin(), v.end());
      for(auto u : v) cout << u << " ";
      cout << "\n";
    return 0;
} 
