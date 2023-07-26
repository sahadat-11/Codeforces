//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int q; cin >> q;
    while(q--) {
      int n, t; cin >> n >> t; int a[n], b[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      for(int i = 0; i < n; i++) cin >> b[i];
      int cost = 0, mx = - 1 , mxi = - 1;
      for(int i = 0; i < n; i++) {
        if(a[i] <= (t - cost)) {
          if(b[i] > mx) {
            mx = b[i];
            mxi = i + 1;
          }
        }
        cost++;
      }
     if(mx != -1) cout << mxi << "\n";
     else cout << -1 << "\n";
    }
	return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;

int main() {
  int q;
  cin >> q;
  
  while(q--) {
    int n, t;
    cin >> n >> t; int a[n], b[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    
    int ans = -1, mx = 0;
    
    for(int i=0; i < n; i++) {
      if (a[i] <= t - i && b[i] > mx) 
        ans = i+1, mx = b[i];
    }
    
    cout << ans << endl;
  }
}
