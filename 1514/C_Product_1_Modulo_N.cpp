//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
bool isValid[N];
int32_t main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    int cnt = 0, pro = 1;
    for(int i = 1; i < n; i++) {
    	if(__gcd(i, n) == 1) {
            isValid[i] = true;
            pro = (pro * i) % n;
            cnt++;
        }
    }
    if(pro != 1) {
      isValid[pro] = false;
      cnt--;
    }
    cout << cnt << "\n";
    for(int i = 1; i < n; i++) {
        if(isValid[i]) {
            cout << i << " ";
        }
    }
    return 0;
}