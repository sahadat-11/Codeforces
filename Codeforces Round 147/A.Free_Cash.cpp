//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n; cin >> n; string s[n];
	cin.ignore();
	for(int i = 0; i < n; i++) {
		getline(cin, s[i]);
	}
	int cnt = 1; int mx = 1;
	for(int i = 1; i < n; i++) {
       if(s[i] == s[i - 1]) {
       	cnt++;
       	mx = max(cnt, mx);
       }
       else cnt = 1;
	}
	cout << mx << "\n";
  return 0;
}

// approach 2;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	int n; cin >> n; int hr[n], mn[n];
	for(int i = 0; i < n; i++) {
		cin >> hr[i] >> mn[i];
	}
	int cnt = 1; int mx = 1;
	for(int i = 1; i < n; i++) {
       if((hr[i] == hr[i - 1]) and (mn[i] == mn[i - 1])) {
       	cnt++;
       	mx = max(cnt, mx);
       }
       else cnt = 1;
	}
	cout << mx << "\n";
  return 0;
}
