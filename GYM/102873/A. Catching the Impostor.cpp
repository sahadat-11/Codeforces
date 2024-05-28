//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[k];
  for(int i = 0; i < k; i++) cin >> a[i];
  set<int> st;
  for(int i = 0; i < k; i++) st.insert(a[i]);
  if(n - st.size() == 1) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}
// https://codeforces.com/gym/102873 