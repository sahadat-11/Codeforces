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
     for(int i = 0, j = n - 1; i <= j; i++, j--) {
       cout << a[i] << " ";
       if(i != j) cout << a[j] << " ";
     }
     cout << "\n";
  }
  return 0;
}
