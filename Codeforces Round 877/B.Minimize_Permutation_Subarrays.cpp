//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n; int a[n];
    int one, two, fin;
    for(int i = 0; i < n; i++) {
      cin >> a[i];
      if(a[i] == 1) one = i + 1;
      if(a[i] == 2) two = i + 1;
      if(a[i] == n) fin = i + 1;
    }
    if(fin < one and fin < two) cout << fin << " " << min(one, two) << "\n";
    else if(fin > one and fin > two) cout << fin << " " << max (one, two) << "\n";
    else cout << "1 1\n";
  }
  return 0;
}
