//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  int cnt = 0;
  for(int i = 0; i <= max(n, m); i++) {
     for(int j = 0; j <= max(n, m); j++) {
       if((i * i + j == n) and (i + j * j == m)) cnt++;
     }
  } 
  cout << cnt << endl;
  return 0;
}
// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main() {
  int n, m, dem = 0;
  cin >> n >> m;
  for (int i = 0; i <= max(sqrt(n), sqrt(m)); i++)
    for (int j = 0; j <= max(sqrt(n), sqrt(m)); j++) {
      if (i * i + j == n && i + j * j == m) dem++;
    }
  cout << dem;
}

// approach 3:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a, b, cnt = 0;
  cin >> n >> m;
  for (b = 0; b <= m * m; b++) {
    a = m - b * b;
    if (a * a + b == n && a >= 0)
      cnt++;
  }
  cout << cnt << endl;
  return 0;
}