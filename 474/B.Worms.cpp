//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n; cin >> n; int a[n];
   for(int i = 0; i < n; i++) cin >> a[i];
   int pre_sum[n] = {0};
   pre_sum[0] = a[0];
   for(int i = 1; i < n; i++) {
      pre_sum[i] = pre_sum[i - 1] + a[i];
   }
   //for(int i = 0; i < n; i++) cout << pre_sum[i] << " ";
   int q; cin >> q;
   while(q--) {
      int x; cin >> x;
      int lb = lower_bound(pre_sum, pre_sum + n, x) - pre_sum;
      cout << lb + 1 << "\n";
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
  
  int n; cin >> n; int a[n];
  vector<int> v;
  int sum = 0;
  v.push_back(0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    v.push_back(sum);
  }
  //for(auto u : v) cout << u << " ";
  int q; cin >> q;
  for(int i = 0; i < q; i++) {
    int x; cin >> x;
    cout << lower_bound(v.begin(), v.end(), x) - v.begin() << "\n";
  }
  return 0;
}