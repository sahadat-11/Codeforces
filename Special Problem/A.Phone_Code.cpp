//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; string s[n];
    int cnt = 0;
    for(int i = 0; i < n; i++) cin >> s[i];
    int sz = s[0].size();
    for(int i = 0; i < sz; i++) {
        bool flag = true;
        for(int j = 0; j < n - 1; j++) {
           if(s[j][i] != s[j + 1][i]) flag = false;
        }
        if(flag) cnt++;
        else break;
    }
    cout << cnt << "\n";
    return 0;
} 
// approach 2:

//In The Name of ALLAH

#include <bits/stdc++.h>
using namespace std;
int main() {
  int i,j,n;
  string s1;
  cin>>n>>s1;
  int le=s1.size();
   for(i=1;i<n;i++){
    string s;cin>>s;
    for(j=0;j<le;j++){
      if(s1[j]!=s[j]) break;
    }
    le=j;
  }
  cout<<le;
    return 0;
}