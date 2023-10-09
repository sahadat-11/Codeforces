//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; string s; cin >> n >> s;
 // for(int i = 0; i < n - 11; i++) cout << s[i];
  //cout << " " << s[n - 11];
  int eight = 0, other = 0;
  for(int i = 0; i < n - 11; i++) {
  	if(s[i] == '8') eight++;
  	else other++;
  }
  if(eight > other) cout << "YES\n";
  else if(other > eight) cout << "NO\n";
  else {
  	if(s[n - 11] == '8') cout << "YES\n";
  	else cout << "NO\n";
  }
  return 0;
}

#include<bits/stdc++.h>
#define endl '\n'
#define int long long
using namespace std;
const int N=2e5+3;
void solve() {
	int n;
	cin>>n;
	string s;
	cin>>s;
	int cnt=0;
	for(int i=0; i<n-10; i++) {
		if(s[i]=='8') cnt++;
	}
	if(cnt>n-10-cnt) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	 
}
signed main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
//	int t;	cin>>t;	while(t--)
	solve();
	return 0;
}
