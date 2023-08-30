//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int sum = k;
    for(int i = 0; i < n; i++) {
      sum += a[i];
    }
    int mx = *max_element(a, a + n);
    int i = 1, sum2 = 0;
    bool flag = false;
    while(1) {
       sum2 += i;
       if(sum2 == sum and i >= mx ) { 
         flag = true;
       }
       if(sum2 > sum) break;
       i++;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  } 
  return 0;
}