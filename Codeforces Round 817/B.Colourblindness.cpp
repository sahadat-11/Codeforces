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
    string s1, s2; cin >> s1 >> s2;
    bool flag = true;
    for(int i = 0; i < n; i++) {
      if((s1[i] == 'R' and (s2[i] == 'G' or s2[i] == 'B')) or (s2[i] == 'R' and (s1[i] == 'G' or s1[i] == 'B'))) flag = false;
    }
    if(flag) cout << "YES\n";
    else cout << "NO\n";
  }
  return 0;
}

// approach 2;

#include <iostream>
using namespace std;
int t;
int n;
string a,b;
int main(){
  cin>>t;
  while(t--){
    cin>>n>>a>>b;
    for(int i=0;i<n;i++){
      if(a[i]=='G') a[i]='B';
      if(b[i]=='G') b[i]='B';
    }
    cout<<(a==b?"YES\n":"NO\n");
  }
  return 0;
}

// approach 3:

#include <bits/stdc++.h >
using namespace std;
int main(){
  int t,n;
  cin>>t;
  while(t--){
    string a,b;
    cin>>n>>a>>b;
    replace(begin(a),end(a),'G','B');
    replace(begin(b),end(b),'G','B');
    cout<<(a==b?"YES":"NO")<<"\n";
  }
  return 0;
}