//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
   int a, b; cin >> a >> b;
   int p;
   int h = a - 1;// 1 to a - 1 xor;
   int mod = h % 4;
   if(mod == 0) p = h;
   else if(mod == 1) p = 1;
   else if(mod == 2) p = h + 1;
   else p = 0;
   if(p == b) {
      cout << a << "\n";
   }
   else if((p ^ a) == b) {
      cout << a + 2 << "\n";
   } 
   else cout << a + 1 << "\n";
   }
   return 0;
}


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 7, mod = 1e9 + 7;
#define int long long
int pre[N];
void solve() {
   int a, b; cin >> a >> b;
   int XOR = pre[a - 1];
   //cout << XOR << "\n";
   if(XOR == b) cout << a << "\n";
   else if(XOR != b and (XOR ^ a) != b) cout << a + 1 << "\n";
   else cout << a + 2 << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) {
   pre[i] = (pre[i - 1] ^ i);
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 3e5 + 7, mod = 1e9 + 7;
#define int long long
int pre[N];
void solve() {
   int a, b; cin >> a >> b;
   int XOR = pre[a - 1];
   //cout << XOR << "\n";
   XOR ^= b;
   if(XOR == 0) cout << a << "\n";
   else if(XOR != a) cout << a + 1 << "\n";
   else cout << a + 2 << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  for(int i = 1; i < N; i++) {
   pre[i] = (pre[i - 1] ^ i);
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://prnt.sc/e3xKk25ZeyqM