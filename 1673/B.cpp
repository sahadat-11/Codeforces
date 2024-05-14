// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    string s; cin >> s;
//    set<int> st;
//    for(auto u : s) st.insert(u);
//    int n = s.size();
//    for(int i = 0; i < n; i++) {
//    	string substr;
//    	for(int j = i; j < n; j++) {
//    	  substr.push_back(s[j]);
//    	  //cout << substr << " ";
//    	  map<char, int> mp;
//    	  for(int k = 0; k < (int)substr.size(); k++) {
//    	  	mp[substr[k]]++;
//    	  }
//    	  int mn = n, mx = 0;
//    	  for(auto u : st) {
//         mn = min(mn, mp[u]);
//         mx = max(mx, mp[u]);
//    	  }
//    	  //cout << mx - mn << "\n";
//    	  if(mx - mn > 1) {
//    	  	cout << "NO\n"; return;
//    	  }
//    	}
//    }
//    cout << "YES\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // (N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   set<char> st;
   for(auto u : s) st.insert(u);
   int x = st.size();
   for(int i = 0; i < n; i++) {
   	if(s[i] != s[i % x]) {
   	  cout << "NO\n"; return;
   	}
   }
   cout << "YES\n";
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

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        string s;
        cin >> s;
        int n = s.length();
        set<char> c;
        bool ok = true;
        int k;
        for(k=0;k<n;k++)
        {
            if(c.find(s[k])==c.end())
                c.insert(s[k]);
            else
                break;
        }
        for(int i=k;i<n;i++)
        {
            if(s[i]!=s[i-k])
                ok = false;
        }
        if(ok)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}