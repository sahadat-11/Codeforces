//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h, m; char c; cin >> h >> c >> m;
    int cnt = 0;
    while((h / 10 != m % 10) or (h % 10 != m / 10)) {
        m++;
        h += m / 60;
        m %= 60;
        h %= 24;
        cnt++;
        //cout << h << " " << m << "\n";
    }
    cout << cnt << "\n";
    // string s; cin >> s;
    // string h = s.substr(0, 2);
    // string m = s.substr(3, 2);
    // //cout << h << " " << m;
    // int cnt = 0;
    // while(h[0] != m[1] or h[1] != m[0]) {
    //     cnt++;
    //     int hh = stoi(h);
    //     int mm = stoi(m);
    //     mm++;
    //     hh += mm / 60;
    //     mm %= 60;
    //     hh %= 24;
    //     if(hh < 10) {
    //         h = '0' + to_string(hh);
    //     }
    //     else h = to_string(hh);
    //     if(mm < 10) {
    //         m = '0' + to_string(mm);
    //     }
    //     else m = to_string(mm);
    //     //cout << h << " " << m << endl;
    // }
    // cout << cnt << endl;
    return 0;
} 