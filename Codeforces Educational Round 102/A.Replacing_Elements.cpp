//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, d; cin >> n >> d; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if(a[n - 1] <= d) cout << "YES\n";
    else {
      int sum = 0;
      bool flag = false;
      for(int i = 0; i < n - 1; i++) {
        sum += (a[i] + a[i + 1]);
        if(sum <= d) flag = true;
      }
      if(flag) cout << "YES\n";
      else cout << "NO\n";
    }
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n, d; cin >> n >> d; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    if((a[0] + a[1] <= d) or (a[n - 1] <= d)) cout << "YES\n";
    else cout << "NO\n";
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
