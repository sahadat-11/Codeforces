//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[n], b[m];
  int e1= 0, o1 = 0, e2 = 0, o2 = 0;
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  	if(a[i] % 2) o1++;
  	else e1++;
  }
  for(int i = 0; i < m; i++) {
  	cin >> b[i];
  	if(b[i] % 2) o2++;
  	else e2++;
  }
  cout << min(e1, o2) + min(e2, o1);
  return 0;
}
