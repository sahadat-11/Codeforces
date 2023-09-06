//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool calculate(int x, int y) {
  if(x == y) return true;
  int temp = x;
  vector<int> v;
  while(temp - x <= 20) {
    if(temp % 10 == 0) break;
    temp += temp % 10;
    if(temp == y) return true;
    v.push_back(temp);
  }
  for(auto u : v) {
    if(y > u and (y - u) % 20 == 0) return true;
  }
  return false;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) {
      if(a[i] % 2) {
        a[i] += a[i] % 10;
      }
    }
    //for(int i = 0; i < n; i++) cout << a[i] << " ";
    bool flag = true;
    int mx = *max_element(a, a + n);
    for(int i = 0; i < n; i++) {
      if(!calculate(a[i], mx)) {
        flag = false;
        break;
      }
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  } 
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main() {
  int _;
  cin >> _;
  while (_--) {
    int n; cin >> n;
    set < int > s;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      x += x % 10; // all become even;
      if (x % 10 == 0) s.insert(x);// always add 0 ;
      else {
        while (x % 10 != 2) x += x % 10;
        s.insert(x % 20);
      }
    }
    //for(auto u : s) cout << u << " ";
    //cout << "\n";
    cout << (s.size() == 1 ? "Yes\n" : "No\n");
  }
}