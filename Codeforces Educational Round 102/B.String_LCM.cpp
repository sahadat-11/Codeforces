//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string a, b; cin >> a >> b; 
        int x = a.size(); int y = b.size();
        int lcm = x / (__gcd(x, y)) * y;
        string p, q, lc;
        for(int i = 0; i < lcm / x; i++) lc += a; // lcm string;
        //cout << lc << "\n";
        for(int i = 0; i < lcm / x; i++) p += a;
        for(int i = 0; i < lcm / y; i++) q += b;
       // cout << p << " " <<  q << endl;
        bool flag = true;
        for(int i = 0; i < lc.size(); i++) {
         if(lc[i] != p[i] or lc[i] != q[i]) flag = false;
       }
       if(flag) cout << lc << "\n";
       else cout << - 1 << "\n";
    }
	return 0;
} 

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        string a, b; cin >> a >> b;
        int x = a.size(); int y = b.size();
        int lcm = x / (__gcd(x, y)) * y;
        string p, q;
        for(int i = 0; i < lcm / x; i++) p += a;
        for(int i = 0; i < lcm / y; i++) q += b;
       // cout << p << " " <<  q << endl;
        if(p == q) cout << p << "\n";
        else cout << "-1\n";
    }
    return 0;
} 
