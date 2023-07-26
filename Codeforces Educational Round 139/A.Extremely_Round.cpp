//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;  int cnt = 0;
        for(int i = 1; i <= n; i = i * 10) {
            for(int j = 1; j <= 9; j++) {
                if(i * j <= n) cnt ++;
            }
        }
        cout << cnt << "\n";
    }
    return 0;
} 

// approach 2: 
#include<bits/stdc++.h>

#define ll long long int
using namespace std;
int main() {
  ll t; cin >> t;
  while (t--) {
    string s; cin >> s;
    ll k = s[0] - '0';
    ll m = s.size();
    cout << (9 * (m - 1)) + k << endl;
  }
  return 0;
}

// approach 3:

#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--){
        string s;
        cin>>s;
        cout<<(int)s.size()*9-57+int(s[0])<<endl;
    }
    return 0;
}