//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   int one = 0;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     if(a[i] == 0) one++;
   }
   bool flag = true;
   for(int i = 1; i < n; i++) {
    if((a[i] % 2) !=( a[i - 1] % 2)) {
      flag = false;
    }
   }
   if(one == n) {
   	cout << "0\n";
   }
   else if(!flag) {
    cout << "-1\n";
   }
   else {
    if(a[0] % 2) {
        cout << 30 << "\n";
        for(int i = 29; i >= 0; i--) {
            cout << (1ll << i) << " ";
        }
    }
    else {
        cout << 31 << "\n";
        for(int i = 29; i >= 0; i--) {
            cout << (1ll << i) << " ";
        }
        cout << 1 << "  ";
    }
   }
   cout << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include <bits/stdc++.h>
using namespace std;
const int MAX_N = 2e5 + 5;
int n, a[MAX_N];
void solve() {
    cin >> n;
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    bool has_odd = false, has_even = false;
    for (int i = 1; i <= n; i++)
        if (a[i] % 2 == 1)
            has_odd = true;
        else
            has_even = true;
    if (has_even && has_odd)
        cout << -1 << '\n';
    else {
        vector<int> operations;
        for (int i = 29; i >= 0; i--)
            operations.push_back(1 << i);
        if (has_even)
            operations.push_back(1);
        cout << operations.size() << '\n';
        for (int x : operations)
            cout << x << ' ';
        cout << '\n';
    }
}
int main() {
    int t;
    cin >> t;
    while (t--)
        solve();
}