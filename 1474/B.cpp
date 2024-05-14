// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e6 + 7, mod = 1e9 + 7;
// #define int long long
// int divs[N];
// int ans[N];
// void solve() {
   
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   for(int i = 1; i < N; i++) {
//      for(int j = i; j < N; j += i) {
//        divs[j]++;
//      }
//    }
//    vector<int> four;
//    for(int i = 1; i < N; i++) {
//     if(divs[i] >= 4) four.push_back(i); 
//    }
//    for(auto u : four) {
//    	  int x = u;
//    	  vector<int> divisors;
//    	  for(int j = 1; j * j <= x; j++) {
//    	  	if(x % j == 0) {
//    	  	  divisors.push_back(j);
//    	  	  if(j != x / j) {
//    	  	  	divisors.push_back(x / j);
//    	  	  }
//    	  	}
//    	  }
//    	  sort(divisors.begin(), divisors.end());
//    	  int mn = INT_MAX;
//    	  for(int j = 1; j < (int)divisors.size(); j++) {
//         mn = min(mn, divisors[j] - divisors[j - 1]);
//    	  }
//    	  if(ans[mn] == 0) ans[mn] = u;
//    	}
//   cout << ans[1000];
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e6 + 7, mod = 1e9 + 7;
#define int long long
bitset<N> f;
void solve() {
   int d; cin >> d;
   int a = d + 1;
   while(f[a]) a++;
   int b = a + d;
   while(f[b]) b++;
   cout << a * b << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  f[0] = f[1] = true; 
  for(int i = 4; i <= N; i += 2) f[i] = true;
  for(int i = 3; i * i <= N; i += 2) {
    if(!f[i]) {
    for(int j = i * i; j <= N; j += 2 * i) f[j] = true;
   } // i*i because (i+i) always a even number large from 2, which is already cut in 2 er condition
  }
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}

// https://www.youtube.com/watch?v=FM1mr6Pq1Nc