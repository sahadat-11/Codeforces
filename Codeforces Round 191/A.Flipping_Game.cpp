//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mx = 0, one = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 1) {
      one++;
      cnt--;
      if(cnt < 0) cnt = 0; // cnt = max(1, cnt);
    }
    else {
      cnt++;
      mx = max(mx, cnt);
    }
  }
  if(one == n) one--;
  cout << one + mx << endl;
  return 0;
}

// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mx = 0, one = 0, cnt = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == 1) one++;
    if(a[i] == 0) {
      cnt++;
      mx = max(cnt, mx);
    }
    else if (cnt > 0) cnt--; // if one 
  }
  if(mx == 0) mx--;
  cout << one + mx << endl;
  return 0;
}

