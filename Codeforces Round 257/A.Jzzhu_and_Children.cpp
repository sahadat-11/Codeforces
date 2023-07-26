//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n, m; cin >> n >> m; int a[n];
	for(int i = 0; i < n; i++) cin >> a[i];
	for(int i = 0; i < n; i++) {
		a[i] = (a[i] + m - 1) / m;
	}
	//for(int i = 0; i < n; i++) cout << a[i] << " ";
	int mx = *max_element(a, a + n);
    //cout << mx << endl;
    int mxi = 0;
    for(int i = 0; i < n; i++) {
    	if(a[i] == mx) {
    		mxi = i + 1;
    	}
    }
    cout << mxi << "\n";
  return 0;
}
