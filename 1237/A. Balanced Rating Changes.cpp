//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  }
  int f = 0;
  for(int i = 0; i < n; i++) {
  	if(a[i] % 2 == 0) {
  		a[i] = a[i] / 2;
  	}
  	else { // down
  		if(f == 0) {
  			if(a[i] > 0) a[i] = a[i] / 2;
  			else a[i] = (a[i] - 1) / 2;
  			f = 1;
  		}
  		else { // up
  			if(a[i] > 0) a[i] = a[i] / 2 + 1;
  			else a[i] = (a[i] + 1) / 2;
  			f = 0;
  		}
  	}
  }
  int sum = 0;
  for(int i = 0; i < n; i++) {
  	sum += a[i];
  	cout << a[i] << "\n";
  }
  //cout << sum << "\n";
  return 0;
}

// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(0); cin.tie(0);
	int x; cin>>x;
	bool f=0;
	while(x--){
		int y; cin>>y;
		if(y%2){
			if(f)cout<<(y+1)/2<<"\n";
			else cout<<(y-1)/2<<"\n";
			f^=1;
		}else cout<<y/2<<"\n";
	}
	return 0;
}