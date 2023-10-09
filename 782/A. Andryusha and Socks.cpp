//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[2 * n];
  for(int i = 0; i < 2 * n; i++) cin >> a[i];
  set<int> st;
  int cnt = 0, mx = 0;
  for(int i = 0; i < 2 * n; i++) {
  	if(st.find(a[i]) == st.end()) {
  		cnt++;
  		mx = max(cnt, mx);
  		st.insert(a[i]);
  	}
  	else cnt--;
  }
  cout << mx << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n + n];
  for(int i = 0; i < 2 * n; i++) cin >> a[i];
  set<int> st;
  int mx = 1;
  for(int i = 0; i < 2 * n; i++) {
    if(st.find(a[i]) != st.end()) st.erase(a[i]);
    else st.insert(a[i]);
    //mx = max(mx, st.size());
   int x = st.size();
   mx = max(mx,x);
  }
  cout << mx << "\n";

  return 0; 
}