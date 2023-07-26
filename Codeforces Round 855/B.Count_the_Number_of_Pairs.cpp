//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n, k; cin >> n >> k;
    string s; cin >> s;
    map<char, int> mp;
    for(auto u : s) mp[u]++;

    //for(auto u : mp) cout << u.first << " " << u.second << "\n";
    int cnt = 0;
    for(char c = 'A'; c <= 'Z'; c++) {
      //cout << mp[c] << " "  << mp[c + 32] << "\n";
      int x = min(mp[c], mp[c + 32]);
      cnt += x;
      mp[c] -= x;
      mp[c + 32] -= x;
      //cout << mp[c] << " "  << mp[c + 32] << "\n";
    }
    for(char c = 'A'; c <= 'Z'; c++) {
      int x = max(mp[c], mp[c + 32]);
      x /= 2;
      cnt += min(x, k);
      k -= min(x, k);
      if(k == 0) break;
    }

    cout << cnt << "\n";
  }

  return 0;
}
// approach 2:

#include<bits/stdc++.h>

using namespace std;
typedef long long ll;

void f() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map < char, int > mp;
  for (int i = 0; i < n; i++) {
    mp[s[i]]++;
  }
  int cnt = 0, ans = 0;
  for (int i = 0; i < 26; i++) {
    cnt += min(mp[i + 'a'], mp[i + 'A']);
    if (k > 0) {
      ans = min(k, abs(mp[i + 'a'] - mp[i + 'A']) / 2);
      cnt += ans;
      k -= ans;
    }
  }
  cout << cnt << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    f();
  }
  return 0;
}

// approach 3:

#include<iostream>

using namespace std;
const int N = 2e5 + 10;
char a[N];
int main() {
  int t;
  scanf("%d", & t);
  while (t--) {
    int n, k;
    int sum = 0, ans = 0;
    int b[256] = {0};
    scanf("%d%d%s", & n, & k, a);
    for (int i = 0; i < n; i++) b[a[i]]++;
    for (int i = 97; i < 123; i++) {
      sum += min(b[i], b[i - 32]);
      ans += abs(b[i] - b[i - 32]) / 2;
    }
    sum += min(ans, k);
    printf("%d\n", sum);
  }
}

// approach 4:

#include <bits/stdc++.h>

using namespace std;

int main() {

  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    map < char, int > m;
    for (int i = 0; i < n; i++) {
      m[s[i]]++;
    }
    int ans = 0;
    int ad = 0;
    for (char i = 'a'; i <= 'z'; i++) {
      ans += min(m[i], m[toupper(i)]);
      ad += abs(m[i] - m[toupper(i)]) / 2;
    }
    ans += min(ad, k);
    cout << ans << "\n";
  }

}