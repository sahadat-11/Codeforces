//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, k; cin >> n >> k; 
   string s; cin >> s;
   string s1 = s;
   sort(s1.begin(), s1.end());
   map<char, int> mp;
   for(int i = 0; i < k; i++) {
   	 mp[s1[i]]++;
   }
   for(int i = 0; i < n; i++) {
   	 if(mp[s[i]]) {
   	 	mp[s[i]]--;
   	 }
   	 else cout << s[i];
   }
   return 0;
}