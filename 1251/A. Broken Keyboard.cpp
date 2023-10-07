//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	string s; cin >> s;
  	set<char>ans;
  	int n = s.size();
  	for(int i = 0; i < n; ) {
  		if(s[i] == s[i + 1]) {
  			i += 2;
  		}
  		else {
  			ans.insert(s[i]); i++;
  		}
  	}
  	for(auto u : ans) cout << u;
  	cout << "\n";
  }
  return 0;
}

// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string s; cin >> s;
        set<char> st;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == s[i + 1]) i++;
            else st.insert(s[i]);
        }
        for(auto u : st) cout << u; cout << "\n";
    }
    return 0;
} 
