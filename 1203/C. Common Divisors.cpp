//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; ll a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  ll gcd = 0;
  for(int i = 0; i < n; i++) {
  	 gcd = __gcd(gcd, a[i]);
  }
  //cout << gcd << endl;
  ll cnt = 0;
  for(int i = 1; 1ll* i * i <= gcd; i++) {
    if(gcd % i == 0) {
    	cnt++;
    	if(i != gcd / i) cnt++;
    }
  }
  cout << cnt << '\n';
  return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; ll a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  ll gcd = 0;
  for(int i = 0; i < n; i++) {
  	 gcd = __gcd(gcd, a[i]);
  }
  //cout << gcd << endl;
  ll div = 1;
  for(ll i = 2; i * i <= gcd; i++) {
  	if(gcd % i == 0) {
  		ll exp = 0;
  		while(gcd % i == 0) {
  			gcd /= i;
  			exp++;
  		}
  		div *= (exp + 1);
  	}
  }
  if(gcd > 1) {
  	ll exp = 1;
  	div *= (exp + 1);
  }
  cout << div << endl;
  return 0;
}
