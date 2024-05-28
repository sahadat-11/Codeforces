// Problem: C. Hacking Cypher
// Contest: Codeforces - Codeforces Round 279 (Div. 2)
// URL: https://codeforces.com/problemset/problem/490/C
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
int cnt[N];
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s; cin >> s;
   int a, b; cin >> a >> b;
   int rem = 0;
   int n = s.size();
   for(int i = 0; i < n; i++) {
   	 rem = (rem * 10 + s[i] - '0') % a;
   	 if(rem == 0) cnt[i + 1]++;
   }
   rem = 0;
   int mul = 1;
   for(int i = n - 1; i >= 0; i--) {
   	 rem = (rem + mul * (s[i] - '0')) % b;
   	 if(rem == 0 and s[i] != '0') cnt[i]++;
   	 mul = (mul * 10) % b;;
   }
   bool flag = false, f = false;
   for(int i = 0; i < n; i++) {
   	 if(cnt[i] == 2) flag = true;
   }
   if(flag) {
   	cout << "YES\n";
   	for(int i = 0; i < n; i++) {
   		if(cnt[i] == 2 and !f) {
   			cout << "\n";
   			f = true;
   		} 
   		cout << s[i];
   	}
   }
   else cout << "NO";
   return 0;
}


 