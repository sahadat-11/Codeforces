//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; string s[n];
  for(int i = 0; i < n; i++) cin >> s[i];
  bool flag = true;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
        if(j - 1 >= 0 and s[i][j - 1] == 'o' ) cnt++;
        if(j + 1 < n and s[i][j + 1] == 'o') cnt++;
        if(i + 1 < n and s[i + 1][j] == 'o') cnt++;
        if(i - 1 >= 0 and s[i - 1][j] == 'o') cnt++;
        if(cnt % 2) flag = false;
      }  
  }
  if(flag) cout << "YES";
  else cout << "NO";
  return 0;
  
}
// approach 2: (optimal for this condition);
#include <bits/stdc++.h>
using namespace std;
char s[111][111];
int main(){
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n; cin >> n;
  for(int i = 1;i <= n;i++){
      for(int j = 1;j <= n;j++){
          cin >> s[i][j];
      }
  }
  bool flag = true;
  for(int i = 1;i <= n;i++){
      for(int j = 1;j <= n;j++){
          int ans = 0;
          if(s[i][j+1] == 'o')ans++;
          if(s[i][j-1] == 'o')ans++;
          if(s[i+1][j] == 'o')ans++;
          if(s[i-1][j] == 'o')ans++;
          if(ans % 2) flag = false
      }
  }
  if(flag) cout << "YES";
  else cout << "NO";
}