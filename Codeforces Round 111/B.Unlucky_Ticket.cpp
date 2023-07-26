//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s; cin >> s;
  string a = s.substr(0, n); // 0 theke n size
  string b = s.substr(n, n); // n theke n size
  //cout << a << " " << b;
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  bool flag = true;
  if(a[0] >= b[0]) {
    for(int i = 0; i < n; i++) {
      if(a[i] <= b[i]) flag = false;
    }
  }
  if(a[0] <= b[0]) {
    for(int i = 0; i < n; i++) {
      if(a[i] >= b[i]) flag = false; 
    }
  }
  if(flag) cout << "YES\n";
  else cout << "NO\n";
  return 0;
}

//approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, cntl = 0, cntg = 0;
  cin >> n;
  string s, first, second;
  cin >> s;
  sort(s.begin(), s.begin() + n);
  sort(s.begin() + n, s.begin() + 2 * n);
  for (int i = 0; i < n; i++) {
    if (s[i] < s[i + n])
      cntl++;
    else if (s[i] > s[i + n])
      cntg++;
  }
  if (cntl == n || cntg == n)
    cout << "YES\n";
  else
    cout << "NO\n";
  return 0;
}

// approach 3:
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n; cin >> n;
    string a(n, ' '), b(n, ' ');
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool less = true, greater = true;
    for(int i = 0; i < n; i++) {
        if(a[i] >= b[i]) less = false;
        if(a[i] <= b[i]) greater = false;
    }
    if(less || greater) cout << "YES" << endl;
    else cout << "NO" << endl;
}
// approach 4:
#include<bits/stdc++.h>
using namespace std;
char arr[110];
int main() {
  int n; cin >> n;
  for (int i = 0; i < 2 * n; i++) cin >> arr[i];
  sort(arr, arr + n);
  sort(arr + n, arr + 2 * n);
  bool flag1 = true, flag2 = true;
  for (int i = 0; i < n; i++) {
    if (arr[i] >= arr[i + n]) {
      flag1 = false;
      break;
    }
  }
  for (int i = 0; i < n; i++) {
    if (arr[i] <= arr[i + n]) {
      flag2 = false;
      break;
    }
  }
  if (flag1 || flag2) cout << "YES" << endl;
  else cout << "NO" << endl;

  return 0;
}