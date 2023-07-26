//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
	while(t--) {
		int n; cin >> n; int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int x = n + 1;
	    for(int i = 0; i < n; i++) {
	    	cout << x - a[i] << " ";
	    }
	    cout << "\n";
	}
}