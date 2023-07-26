//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    int n; cin >> n;
    int alp[26];
    for(int i = 0; i < 26; i++) cin >> alp[i];
    int mx = *max_element(alp, alp + 26);
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum += (i + 1) * alp[s[i] - 'a'];
    }
    //cout << sum << "\n";
    // int x = s.size() + n;
    // for(int i = s.size() + 1; i <= x; i++) sum += (i * mx);
    // cout << sum << "\n";
    int sz = s.size();
    int x = sz + n;
    sum += mx * ((x * (x + 1) / 2) - (sz * (sz + 1) / 2));
    cout << sum << "\n";
    return 0;
} 