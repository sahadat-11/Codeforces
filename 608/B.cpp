//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  int sum = 0;
  int n1 = a.size(), n2 = b.size();
  for(int i = 0; i < n2 - n1 + 1; i++) {
  	for(int j = 0; j < n1; j++) {
  	  if(a[j] != b[i + j]) sum++;
  	}
  }
  cout << sum << "\n";
  return 0;
}
// O(N * N)

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int pre_z[N], pre_o[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  int sum = 0;
  int n1 = a.size(), n2 = b.size();
  if(b[0] == '0') pre_z[0] = 1;
  else pre_o[0] = 1;
  for(int i = 1; i < n2; i++) {
  	if(b[i] == '1') {
  		pre_o[i] = pre_o[i - 1] + 1;
  		pre_z[i] = pre_z[i - 1];
  	}
  	else {
  		pre_z[i] = pre_z[i - 1] + 1;
  		pre_o[i] = pre_o[i - 1];
  	}
  }
  // for(int i = 0; i < n2; i++) {
  // 	cout << pre_o[i] << " " << pre_z[i] << "\n";
  // }
  for(int i = 0; i < n1; i++) {
  	int l = i, r = n2 - n1 + i;
  	if(a[i] == '0') {
  	  if(l == 0) sum += pre_o[r];
  	  else sum += pre_o[r] - pre_o[l - 1];
  	}
  	else {
  	  if(l == 0) sum += pre_z[r];
  	  else sum += pre_z[r] - pre_z[l - 1];
  	}
  }
  cout << sum << "\n";
  return 0;
}
// O(N) // O indexing;

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
int pre_z[N], pre_o[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  int sum = 0;
  int n1 = a.size(), n2 = b.size();
  a = '#' + a; b = '#' + b;
  for(int i = 1; i <= n2; i++) {
  	if(b[i] == '1') {
  		pre_o[i] = pre_o[i - 1] + 1;
  		pre_z[i] = pre_z[i - 1];
  	}
  	else {
  		pre_z[i] = pre_z[i - 1] + 1;
  		pre_o[i] = pre_o[i - 1];
  	}
  }
  // for(int i = 0; i < n2; i++) {
  // 	cout << pre_o[i] << " " << pre_z[i] << "\n";
  // }
  for(int i = 1; i <= n1; i++) {
  	int l = i, r = n2 - n1 + i;
  	if(a[i] == '0') {
  	  sum += pre_o[r] - pre_o[l - 1];
  	}
  	else {
  	  sum += pre_z[r] - pre_z[l - 1];
  	}
  }
  cout << sum << "\n";
  return 0;
}