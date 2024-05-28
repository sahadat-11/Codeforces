//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  int ans = 0;
  if(a[1] == 1 and a[n] == n) ans = n - 1;
  if(a[n] == 1000 and a[1] == 1000 - n + 1) ans = n - 1;
  if(a[1] == 1) {
  	int cnt = 1;
  	for(int i = 2; i <= n; i++) {
  		if(a[i] == a[i - 1] + 1) cnt++;
  		else break;
  	}
  	ans = max(ans, cnt - 1);
  }
  if(a[n] == 1000) {
  	int cnt = 1;
  	for(int i = n - 1; i >= 1; i--) {
  		if(a[i] == a[i + 1] - 1) cnt++;
  		else break;
  	}
  	ans = max(ans, cnt - 1);
  }
  	int cnt = 1, mx = 1;
  	for(int i = 2; i <= n; i++) {
  	  if(a[i] == (a[i - 1] + 1)) {
  	  	cnt++;
  	  	mx = max(mx, cnt);
  	  }
  	  else cnt = 1;
  	}
  	//if()
  	mx = max(mx, cnt);
  	ans = max(mx - 2, ans);
    cout << ans << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + 2];
  for(int i = 1; i <= n; i++) cin >> a[i];
  a[0] = 0;
  a[n + 1] = 1001;
  int cnt = 1, ans = 0;
  for(int i = 1; i <= n + 1; i++) {
  	 if(a[i] == a[i - 1] + 1) cnt++;
  	 else {
  	 	ans = max(ans, cnt - 2);
  	 	cnt = 1;
  	 }
  }
  ans = max(ans, cnt - 2);
  cout << ans << "\n";
  return 0;
}