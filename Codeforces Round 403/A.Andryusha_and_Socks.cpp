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

// approach 2:
#include <iostream>
using namespace std;
int main (){
  int n;
  cin >> n;
  map<int, int> m;
  int max1 = 0;
  int t = 0;
  for(int i = 0; i < n * 2; i++){
    int x;
    cin >> x;
    if(m[x] == 0){
      t++;
      m[x]++;
    }
    else{
      max1 = max(max1, t);
      t--;
    }
  }
  cout << max1 << endl;
  return 0;
}

// approach 3:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int ans = 1;
  unordered_map < int, int > mp;
  for (int i = 0; i < 2 * n; i++) {
    int x;
    cin >> x;
    mp[x]++;
    if (mp[x] == 2) {
      mp.erase(x);
    }
    int s = mp.size();
    ans = max(ans, s);
  }
  cout << ans << endl;
}