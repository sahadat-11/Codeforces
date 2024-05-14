// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, m, k; cin >> n >> m >> k;
//    vector<int> a(n), b(m);
//    for(int i = 0; i < n; i++) {
//     cin >> a[i]; 
//    }
//    map<int, int> mp1, mp2;
//    for(int i = 0; i < m; i++) {
//     cin >> b[i];
//     mp1[b[i]]++;
//     mp2[b[i]]++;
//    }
//    //for(auto [u, v] : mp1) cout << u << " " << v << endl;
//    int cnt = 0;
//    for(int i = 0; i < n - m + 1; i++) {
//    	int x = 0;
//    	for(int j = i; j < m + i; j++) {
//       if(mp1[a[j]] >= 1) {
//       	x++;
//       	mp1[a[j]]--;
//       }
//    	}
//    	//for(auto [u, v] : mp1) cout << u << " " << v << endl; cout << "\n";
//    	//cout << x << endl;
//    	if(x >= k) cnt++;
//    	mp1 = mp2;
//    }
//    //for(auto [u, v] : mp1) cout << u << " " << v << endl;
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // (N * N * log(N))


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, m, k; cin >> n >> m >> k;
   vector<int> a(n), b(m);
   for(int i = 0; i < n; i++) {
    cin >> a[i]; 
   }
   map<int, int> mp1, mp2;
   for(int i = 0; i < m; i++) {
    cin >> b[i];
    mp1[b[i]]++;
   }
   int cnt = 0, x = 0;
   for(int i = 0; i < m; i++) {
   	mp2[a[i]]++;
   	if(mp1[a[i]] >= 1 and mp1[a[i]] >= mp2[a[i]]) {
   	  x++;
   	}
   }
   if(x >= k) cnt++;
   //for(auto [u, v] : mp2) cout << u << " " << v << endl; cout << "\n";
   for(int i = m; i < n; i++) {
   	mp2[a[i]]++; 
   	if(mp1[a[i]] >= 1 and mp1[a[i]] >= mp2[a[i]]) {
   	  x++;
   	}
    mp2[a[i - m]]--;
    if(mp1[a[i - m]] >= 1 and mp1[a[i - m]] > mp2[a[i - m]]) {
   	  x--;
   	}
   	if(x >= k) cnt++;
   	//cout << x << " " << cnt << "\n\n";
   	//for(auto [u, v] : mp2) cout << u << " " << v << endl; cout << "\n";
   }
   cout << cnt << "\n";
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

// (N * log(N))