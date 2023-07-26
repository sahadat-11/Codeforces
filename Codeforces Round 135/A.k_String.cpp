//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int k; cin >> k;
    string s; cin >> s;
    unordered_map<char, int> mp;
    for(int i = 0; i < s.size(); i++) mp[s[i]]++;
    bool flag = true;
    for(auto u : mp) {
        if(u.second % k) flag = false;
    }
    string ans;
    for(auto u : mp) {
        int x = u.second / k;
        for(int i = 0; i < x; i++) ans += u.first;
    }
    if(!flag) cout << -1 << "\n";
    else {
        for(int i = 0; i < k; i++) cout << ans;
    }
    return 0;
} 

#include <bits/stdc++.h>
using namespace std;
int main(){
    int k; cin >> k;
    string s, a, b; cin >> s;
    sort(s.begin(),s.end());
    for(int i = 0; i < s.size(); i += k){
        a += s[i];
    }
    cout << a << endl;
    for(int i = 0; i < k; i++){
        b += a;
    }
    cout << b << endl;
    a = b;
    sort(a.begin(),a.end());
    if(a != s){
        cout << -1 << endl;
    }
    else{
        cout << b << endl;
    }
    return 0;
}

