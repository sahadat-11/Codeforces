//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
  int n; string s; cin >> n >> s;
  int cnt = 0, cnt1 = 0;
  for(int i = 2; i < n; i++) {
  	if((s[i - 2] == 'm' and s[i - 1] == 'a' and s[i] == 'p') or (s[i - 2] == 'p' and s[i - 1] == 'i' and s[i] == 'e')) cnt++;
    if((s[i - 2] == 'm' and s[i - 1] == 'a' and s[i] == 'p')) {
      if(i + 2 < n and s[i + 1] == 'i' and s[i + 2] == 'e') cnt1, i += 2;
    }
  }
  cout << cnt - cnt1 << "\n"; 
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include <iostream>
#include<vector>
using namespace std;
const int MOD = 1e9+7;

void solve(){
  int n;  cin>>n;
  string s; cin>>s;
  int ans = 0;
  for(int i=0;i<n-2;i++){
    string k = s.substr(i,3);
    if(k=="pie" || k=="map")ans++,i+=2;
  }
  cout<<ans<<"\n";
}

int main() 
{
  int tt; cin>>tt;
  while(tt--)solve();
  
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
#define int long long 
signed main(){
	int t;cin>>t;
	while(t--){
		string s;
		int n;cin>>n>>s;
		int res=0;
		for(int i=0;i<n;i++){
			if(s[i]=='m'&&s[i+1]=='a'&&s[i+2]=='p')
				res++,i+=2;
			else if(s[i]=='p'&&s[i+1]=='i'&&s[i+2]=='e')
				res++,i+=2;
		}
		cout<<res<<'\n';
	}
}