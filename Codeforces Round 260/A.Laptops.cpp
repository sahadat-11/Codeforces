//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int n; cin >> n;
  bool flag = true;
  while(n--) {
    int a, b; cin >> a >> b;
    if(b > a) flag = false;
  }
  if(flag) cout << "Poor Alex";
  else cout << "Happy Alex";
  return 0;
}



