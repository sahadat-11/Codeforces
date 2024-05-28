//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int o = 0, t = 0, f = 0, s = 0, th = 0;
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  	if(a[i] == 1) o++;
  	else if(a[i] == 2) t++;
  	else if(a[i] == 3) th++;
  	else if(a[i] == 4) f++;
  	else if(a[i] == 6) s++;
  }
  bool flag = true;
  if((o != n / 3) or ((t + th) != n / 3) or ((f + s) != n / 3) or (th > s)) flag = false;
  if(!flag) cout << "-1\n";
  else {
  	for(int i = 0; i < f; i++) {
  		cout << "1 2 4\n";
  	}
  	for(int i = 0; i < th; i++) {
  		cout << "1 3 6\n";
  	}
  	for(int i = 0; i < s - th; i++) {
  		cout << "1 2 6\n";
  	}
  	
  }
  
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  map<int, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  bool flag = true;
  // for(int i = 1; i <= 7; i++) {
  //   cout << mp[i] << " ";
  // }
  if(mp[1] != n / 3 or (mp[2] + mp[3]) != n / 3 or (mp[4] + mp[6]) != n / 3) flag = false;
  if(mp[3] > mp[6]) flag = false; 
  if(!flag) cout << -1;
  else {
    for(int i = 1; i <= n / 3; i++) {
    if(mp[1]) {
      cout << 1 << " ";
      mp[1]--;
    }
    if(mp[2]) {
      cout << 2 << " ";
      mp[2]--;
    }
    else if(mp[3]) {
      cout << 3 << " ";
      mp[3]--;
    }
    if(mp[4]) {
      cout << 4 << " ";
      mp[4]--;
    }
    else if(mp[6]) {
      cout << 6 << " ";
      mp[6]--;
    }
    cout << "\n";
   }
  } 
  return 0;
}