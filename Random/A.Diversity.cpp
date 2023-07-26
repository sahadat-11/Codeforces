//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; int n; cin >> s >> n;
    set<char> st;
    for(auto u : s) {
        st.insert(u);
    }
    //cout << st.size();
    if(s.size() < n) cout << "impossible\n";
    else if(st.size() >= n) cout << 0 << "\n";
    else cout << n - st.size() << "\n"; 
    return 0;
} 