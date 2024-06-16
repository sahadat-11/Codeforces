//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    string s; cin >> s;
    int mx = 1;
    for(auto c : s) {
      mx = max(mx, c - 'a' + 1);
    }
    cout << mx << "\n";
  }
  return 0;
}

// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    char s[101];
    for (cin >> t; t--;) {
        cin >> n >> s;
        sort(s, s + n);
        cout << s[n - 1] - 'a' + 1 << endl;
    }
}

// approach 3:
#include<bits/stdc++.h>
using namespace std;
int main(){
  char s[101];
  int t;
  scanf("%d",&t);
  while(t--){
    int n;
    scanf("%d %s",&n,&s);
    printf("%d\n",*max_element(s,s+n)+1-'a');
  }
}