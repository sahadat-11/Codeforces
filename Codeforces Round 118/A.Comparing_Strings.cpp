//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  int n = a.size();
  int first = -1, second = -1;
  for(int i = 0; i < n; i++) {
    if(a[i] != b[i] and first == -1) {
      first = i;
    }
    if(a[i] != b[i] and first >= 0) {
      second = i;
    }
  }
  swap(a[first], a[second]);
  if(a == b) cout << "YES";
  else cout << "NO";
  return 0;
}

// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
  string s1, s2;
  vector < int > v;
  cin >> s1 >> s2;
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] != s2[i]) {
      v.push_back(i);
    }
  }
  if (v.size() == 2) {
    swap(s1[v[0]], s1[v[1]]);
  }
  if (s1 == s2) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}

// approach 3:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
char a[10000001], b[10000001];
int ans;
int main() {
  cin >> a >> b;
  for (int i = 0; i < strlen(a); i++)
    if (a[i] != b[i]) ans++;
  sort(a, a + strlen(a));
  sort(b, b + strlen(b));
  if (strstr(a, b) && ans == 2 && (strlen(a) == strlen(b))) cout << "YES";

  else cout << "NO";
  return 0;
}

// approach 4:

#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  string s, p;
  cin >> s >> p;
  if ((int) s.size() != (int) p.size()) {
    cout << "NO\n";
    return 0;
  }
  int cnt = 0;
  for (int i = 0; i < (int) s.size(); i++)
    if (s[i] != p[i])
      ++cnt;
  sort(s.begin(), s.end());
  sort(p.begin(), p.end());
  cout << (cnt <= 2 && s == p ? "YES\n" : "NO\n");
}