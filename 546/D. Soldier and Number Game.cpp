//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N = 5e6 + 8;
int f[N];
int main() {
	ios_base::sync_with_stdio(0);
    cin.tie(0);
    for(int i = 2; i < N; i++) {
    	if(!f[i]) {
    		for(int j = i; j < N; j += i) {
    			f[j] = f[j / i] + 1;
    		}
    	}
    }
    for(int i = 2; i < N; i++) {
    	f[i] = f[i] + f[i - 1];
    }
    int t; cin >> t;
    while(t--) {
    	int a, b; cin >> a >> b;
    	cout << f[a] - f[b] << "\n";
    }
}