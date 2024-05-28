//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> index, cnt;
   bool flag = false;
   for(int i = 0; i < n; i++) {
   	if(cnt[v[i]] >= 1) {
   	  int x = i - index[v[i]];
   	  if(x > 1) flag = true;
   	}
   	if(cnt[v[i]] == 0) {
   	  index[v[i]] = i;
   	}
   	cnt[v[i]]++;
   }
   if(flag) cout << "YES\n";
   else cout << "NO\n";
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

// 
#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0);cin.tie(0);
	int t;cin>>t;
	while(t--){
		int x,y; cin>>x;
		map<int,int>mp;
		bool f=0;
		for(int i=1;i<=x;i++){
			cin>>y;
			if(mp.find(y)!=mp.end()&&i-mp[y]>1)
				f=1;
			if(mp.find(y)==mp.end())mp[y]=i;
		}
		cout<<(f?"YES\n":"NO\n");
	}
	return 0;
}