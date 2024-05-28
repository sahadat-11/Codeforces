//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   map<int, int> mp;
   bool used1[100] = {false};
   bool used2[100] = {false};
   for(int i = 0; i < n; i++) mp[v[i]]++;
   int one, two;
   for(int i = 0; i <= 100; i++) {
   	if(mp[i] == 1) {
   	  used1[i] = true;
   	}
   	else if(mp[i] >= 2) {
   	  used1[i] = true;
   	  used2[i] = true;
   	}
   }
   for(int i = 0; i <= 100; i++) {
   	if(!used1[i]) {
   	  one = i; break;
   	}
   }
   for(int i = 0; i <= 100; i++) {
   	if(!used2[i]) {
   	  two = i; break;
   	}
   }
   cout << one + two << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n , a = 0 , b = 0;
  cin >> n;
  map<int , int>freq;
  for(int i = 0 , num ; i < n ; i++) {
    cin >> num;
    freq[num]++;
  }

  while(freq[a] > 0) freq[a]-- , a++;
  while(freq[b]) b++;

  cout << a + b << '\n';
  return;
}

int main() {

  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);

  int tt = 1;
  cin >> tt;
  while(tt--) {
    solve();
  }
  return 0;
}
