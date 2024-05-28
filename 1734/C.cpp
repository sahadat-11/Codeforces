//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string s; cin >> n >> s;
   //int one = count(s.begin(), s.end(), '1');
   int ans = 0;
   vector<bool> used(n, false);
   for(int i = 1; i <= n; i++) {
   	for(int j = i - 1; j < n; j += i) {
       if(s[j] == '0') {
       	 s[j] = '1';
       	 ans += i;
       	 used[j] = true;
       }
       else if(s[j] == '1' and !used[j]) break;
   	}
   	//cout << ans << "\n";
   }
   cout << ans << "\n";
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


#include <bits/stdc++.h>

using namespace std;
int main(){
	int T, N;
	string s;
	for(cin >> T; T; T--){
		cin >> N >> s;
		long long ans = 0;
		for(int i=1; i<=N; i++)
			for(int j=i; j<=N; j+=i){
				if(s[j-1] == '1')
					break;
				if(s[j-1] == '0')
					ans += i;
				s[j-1] = '2';
			}
		cout << ans << endl;
	}
}