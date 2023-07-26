//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int ans = n - 1;
    for(int i = 1; i < n - 1; i++) {
      if(s[i - 1] == s[i + 1]) ans--;
    }
    cout << ans << "\n";
  }

  return 0;
}

// approach 2:

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
#define ll long long
int main() {
  sahadat();
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    int c = 1;
    for (int i = 0; i < n - 2; i++) {
      if (s[i] != s[i + 2]) c++;
    }

    cout << c << endl;
  }

  return 0;
}

