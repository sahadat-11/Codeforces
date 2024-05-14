//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> a(n);
   for(int i = 0; i < n; i++) {
     cin >> a[i];
   }
   if(is_sorted(a.begin(), a.end())) {
   	cout << "0\n";
   }
   else if(a[n - 2] > a[n - 1]) {
   	cout << -1 << "\n";
   }
   else if(a[n - 1] >= 0){
   	cout << n - 2 << "\n";
   	for(int i = 0; i < n - 2; i++) {
   	  cout << i + 1 << " " << n - 1 << " " << n << "\n";
   	}
   }
   else {
   	cout << "-1\n";
   }
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


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];

    for(int i = 0; i < n; i++) cin >> a[i];

    if(is_sorted(a, a + n)) cout << 0 << "\n";
    else if(a[n - 2] > a[n - 1] or a[n - 1] < 0) cout << -1 << "\n";
    else {
      cout <<  n - 2 << "\n";
      for(int i = 0; i < n - 2; i++) {
        cout << i + 1 << " " << n - 1 << " " << n << "\n";
      }
    }
  }

  return 0;
}
