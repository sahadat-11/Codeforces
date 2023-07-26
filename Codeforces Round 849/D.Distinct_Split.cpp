// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// void solve() {
//     int n; string s; cin >> n >> s; 
//     unordered_map<char, int > mp;
//     //for(auto u : s) mp[u]++;
//     int indx = -1;
//     set<int> s1, s2;
//     for(int i = 0; i < n; i++) {
//         if(mp[s[i]] > 0) {
//             indx = i; break;
//         }
//         else mp[s[i]]++;
//     }
//     string x = s.substr(0, indx);
//     string y = s.substr(indx);
//     //cout << x << " " << y << endl;
//     for(auto u : x) s1.insert(u);
//     for(auto u : y) s2.insert(u);
//     cout << s1.size() + s2.size() << "\n";
// }
// int main() {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     int t; cin >> t;
//     while(t--) {
//        solve();
//     }
// 	return 0;
// } 

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; string s; cin >> n >> s; 
    int pre[n], suf[n];
    set<int> st;
    for(int i = 0; i < n; i++) {
        st.insert(s[i]);
        pre[i] = st.size();
    }
    st.clear();
    for(int i = n - 1; i >= 0; i--) {
        st.insert(s[i]);
        suf[i] = st.size();
    }
    int mx = 0;
    for(int i = 0; i < n - 1; i++) {
        mx = max(pre[i] + suf[i + 1], mx);
    }
    cout << mx << "\n";
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
       solve();
    }
    return 0;
} 


#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n; cin>>n;
    string s; cin>>s;
    unordered_map<char,int> mp1,mp2;
    for(auto &x:s) mp2[x]++;
        int res=0;
    for(auto &x:s){
        mp2[x]--;
        if(mp2[x]==0) mp2.erase(x);
        mp1[x]++;
        res=max(res,int(mp1.size()+mp2.size()));
    } 
    cout << res << "\n";
}

int main() {
    int t; cin>>t;
    while(t--){
        solve();
    }
}
