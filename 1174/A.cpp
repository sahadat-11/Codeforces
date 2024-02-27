//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n;
   vector<int> v(2 * n);
   for(int i = 0; i < 2 * n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   ll sum1 = 0, sum2 = 0;
   for(int i = 0; i < n; i++) sum1 += v[i];
   for(int i = n; i < 2*n; i++) sum2 += v[i];
   //cout << sum1 << " " << sum2 << "\n";
   if(sum2 != sum1) {
   	 for(auto u : v) cout << u << " ";
   }
   else cout << "-1\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int n;
  cin >> n;
  vector<int> v(2 * n);
  for (auto &x : v) cin >> x;
  sort(v.begin(), v.end());
  for (int i = 1; i < 2 * n; i++)
  {
    if (v[i] != v[i - 1])
    {
      for (auto &x : v) cout << x << ' ';
      return 0;
    }
  }
  cout << -1;
}
