//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  bool flag = true;
  // for(int i = 1; i <= 7; i++) {
  //   cout << mp[i] << " ";
  // }
  if(mp[1] != n / 3 or (mp[2] + mp[3]) != n / 3 or (mp[4] + mp[6]) != n / 3) flag = false;
  if(mp[3] > mp[6]) flag = false; 
  if(!flag) cout << -1;
  else {
    for(int i = 1; i <= n / 3; i++) {
    if(mp[1]) {
      cout << 1 << " ";
      mp[1]--;
    }
    if(mp[2]) {
      cout << 2 << " ";
      mp[2]--;
    }
    else if(mp[3]) {
      cout << 3 << " ";
      mp[3]--;
    }
    if(mp[4]) {
      cout << 4 << " ";
      mp[4]--;
    }
    else if(mp[6]) {
      cout << 6 << " ";
      mp[6]--;
    }
    cout << "\n";
   }
  } 
  return 0;
}

// approach 2:

#include<bits/stdc++.h>

using namespace std;
int n;
int a[10];
int main() {
  cin >> n;
  for (int i = 1; i <= n; ++i) {
    int x;
    cin >> x;
    if (x == 5 || x == 7) {
      cout << "-1";
      return 0;
    }
    a[x]++;
  }
  if (a[1] == a[2] + a[3] && a[1] == a[4] + a[6] && a[4] <= a[2] && a[3] <= a[6]) {
    for (int i = 1; i <= a[4]; ++i)
      cout << "1 2 4" << endl;
    a[2] -= a[4];
    for (int i = 1; i <= a[2]; ++i)
      cout << "1 2 6" << endl;
    a[6] -= a[2];
    for (int i = 1; i <= a[6]; ++i)
      cout << "1 3 6" << endl;
  } else cout << "-1";
  return 0;
}

// approach 3:                                      
#include <iostream>
using namespace std;
int d[7];
int main() {
  int n;
  cin >> n;
  int k;
  for (int i = 0; i < n; i++) {
    cin >> k;
    d[k - 1] += 1;
  }
  if (d[4] > 0 || d[6] > 0 || d[0] != n / 3 || d[1] < d[3] || d[5] != d[2] + (d[1] - d[3])) {
    cout << -1;
    return 0;
  }
  for (int i = 0; i < d[3]; i++) {
    cout << "1 2 4\n";
  }
  for (int i = 0; i < d[2]; i++) {
    cout << "1 3 6\n";
  }
  for (int i = 0; i < (n / 3) - ((d[2]) + d[3]); i++) {
    cout << "1 2 6\n";
  }
}
