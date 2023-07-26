//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int y, k, n; cin >> y >> k >> n;
  int x = ((y + k) / k) * k;

  vector<int> v;
  for(int i = x; i <= n; i += k) {
     v.push_back(i - y);
  }
  if(v.size() == 0) cout << -1;
  else for(auto u : v) cout << u << " ";
  return 0;
}

// approach 2:
#include<bits/stdc++.h>
using namespace std;
bool flag = 0;
int main(){
  long long n, x, y, k;
  cin >> y >> k >> n;
  for(long long i = k; i <= n; i += k){
    if(i <= y) continue;
    cout << i - y << " ";
    flag = 1;
  }
  if(flag == 0) cout << -1;
  return 0;
}

// approach 3:

#include<iostream>
using namespace std;
int main() {
  long y, k, n;
  cin >> y >> k >> n;
  bool output = true;
  long rem = y % k;
  for (long i = k - rem; i <= n - y; i += k) {
    cout << i << " ";
    output = false;
  }
  if (output) {
    cout << "-1";
  }
}