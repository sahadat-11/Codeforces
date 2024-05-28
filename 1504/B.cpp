//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string a, b; cin >> n >> a >> b;
   if(a == b) {
   	cout << "YES\n"; return;
   }
   int one = 0, zero = 0, equal = 0;
   for(int i = 0; i < n; i++) {
   	if(a[i] == '1') one++;
   	else zero++;
   	if(a[i] == b[i]) equal++;
   	if(one == zero) {
      if(equal == 0 or equal == (one + zero)) {
      	one = 0, zero = 0, equal = 0;
      }
      else {
         cout << "NO\n"; return;
      }
   	}
   }
   //cout << one << " " << zero << endl;
   if(one == zero or (one + zero) == equal) cout << "YES\n";
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


#include<bits/stdc++.h>
using namespace std;
 
int main()
{
   	int t; cin>>t;
	while(t--){
	int n; cin>>n;
	string s1,s2; cin>>s1>>s2;
	int x=0,y=0,k=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]=='1') x++;
		else x--;
		if(s2[i]=='1') y++;
		else y--;
		if(x!=y&&x!=-y){
		    k=1; 
		    break;
		}
	} 
	 if(k or x!=y) cout<<"NO"; else cout<<"YES";
	 cout<<endl;
    }
}