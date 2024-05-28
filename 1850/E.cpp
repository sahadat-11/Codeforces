//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int unsigned long long
void solve() {
   int n, c; cin >> n >> c;
   vector<int> v(n);
   for(int i = 0; i < n; i++) {
     cin >> v[i];
   }
   int l = 1, h = 1e9, ans = 0;
   while(l <= h) {
   	int mid = l + (h - l) / 2;
   	int sum = 0;
   	for(int i = 0; i < n; i++) {
   	  sum += (mid * 2 + v[i]) * (mid * 2 + v[i]);
   	  if(sum > c) {
   	  	h = mid - 1; break;
   	  }
   	}
   	if(sum == c) {
   	  	ans = mid;
   	  	break;
   	}
    else if(sum > c) h = mid - 1;
    else l = mid + 1;
    //cout << sum << endl;
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
	int t;
	cin>>t;
	while(t--){
		long long n,c,sum=0,x,i,u;
		cin>>n>>c;
		for(i=0;i<n;i++){
			cin>>x;
			c=c-x*x;
			sum+=x;
		}
		u=sum/n;
		cout<<((int)sqrt(u*u+c/n)-u)/2<<endl;
	}
}