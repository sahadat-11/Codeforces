//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, x, y; cin >> n >> x >> y;
   int ans;
   if(x == 0 and y == 0) cout << "-1\n";
   else if(x != 0 and y != 0) cout << "-1\n";
   else if(x != 0) {
   	if((n - 1) % x != 0) cout << "-1\n";
   	else {
   	  for(int i = 2; i <= n; i += x) {
   	  	for(int j = 1; j <= x; j++) cout << i << " ";
   	  }
   	  cout << '\n';
   	} 
   } 
   else if(y != 0) {
   	if((n - 1) % y != 0) cout << "-1\n";
   	else {
   	  for(int i = 2; i <= n; i += y) {
   	  	for(int j = 1; j <= y; j++) cout << i << " ";
   	  }
   	  cout << '\n';
   	} 
   }

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



#import<bits/stdc++.h>
#define endl '\n'
using namespace std;
int k, n, t, x, y;
int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	for(cin >> t; t--;)
	{
		cin >> n >> x >> y;
		if(x > y)swap(x, y);
		if(x || !y || (n - 1) % y)
		{
			cout << -1 << endl;
			continue;
		}
		for(int k = 2; k <= n; k += y)
		{
			for(int i = 1; i <= y; i++)cout << k << ' ';
		}
		cout << endl;
	}
}