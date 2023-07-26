//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n + 1], b[n + 1];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) cin >> b[i];
		int cnt = 0;
	    map<int, int> va;
	    map<int, int> vb;
	    for(int i = 0; i < n; i++) {
	    	 cnt++;
             if(i == n - 1 or a[i] != a[i + 1]) {
           	 if(va.find(a[i]) == va.end()) {
           	 	va[a[i]] = cnt;
           	 }
           	 else {
           	 	va[a[i]] = max(va[a[i]], cnt);
           	 }
           	 cnt = 0;
           }
	    }
	    cnt = 0;
	    for(int i = 0; i < n; i++) {
	    	 cnt++;
             if(i == n - 1 or b[i] != b[i + 1]) {
           	 if(vb.find(b[i]) == va.end()) {
           	 	vb[b[i]] = cnt;
           	 }
           	 else {
           	 	vb[b[i]] = max(vb[b[i]], cnt);
           	 }
           	 cnt = 0;
           }
	    }
	    // for(auto u : vb) {
     //       cout << u.first << " " << u.second << endl;
	    // }
	    int ans = 0;
	    for(int i = 0; i < n; i++) {
	    	int x = va[a[i]] + vb[a[i]];
	    	ans = max(ans, x);
	    }

	    for(int i = 0; i < n; i++) {
	    	int x = va[b[i]] + vb[b[i]];
	    	ans = max(ans, x);
	    }
	    cout << ans << "\n";
		
	}
}