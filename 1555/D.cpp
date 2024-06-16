// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// string beauty[6];

// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n, q; cin >> n >> q;
//   string s; cin >> s;
//   vector<char> p({'a', 'b', 'c'});
//   int id = 0;
//   do {
//     beauty[id].resize(n);
//     for(int i = 0; i < n; i++) {
//     	beauty[id][i] = p[i % 3];
//     }
//     id++;
//   } while(next_permutation(p.begin(), p.end()));
//   // for(int i = 0; i < 6; i++) {
//   //   cout << beauty[i] << "\n";
//   // }
//   while(q--) {
//   	int l, r; cin >> l >> r;
//     --l; --r;
//     int ans = 1e9;
//     for(int id = 0; id < 6; id++) {
//       int ops = 0;
//       for(int i = l; i <= r; i++) {
//       	ops += s[i] != beauty[id][i - l];
//       }
//       ans = min(ans, ops);
//     }
//     cout << ans << "\n";
//   }
//   return 0;
// }

// // O(N * M)


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 7, mod = 1e9 + 7;
#define int long long
string beauty[6];
int pre_cal[6][N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q;
  string s; cin >> s;
  vector<char> p({'a', 'b', 'c'});
  int id = 0;
  do {
    beauty[id].resize(n);
    for(int i = 0; i < n; i++) {
    	beauty[id][i] = p[i % 3];
    }
    id++;
  } while(next_permutation(p.begin(), p.end()));
  // for(int i = 0; i < 6; i++) {
  //   cout << beauty[i] << "\n";
  // }

  for(int id = 0; id < 6; id++) {
  	for(int i = 0; i < n; i++) {
  	  if(i == 0) {
  	  	pre_cal[id][i] = (s[i] != beauty[id][i]);
  	  }
  	  else {
  	  	pre_cal[id][i] = pre_cal[id][i - 1] + (s[i] != beauty[id][i]);
  	  }
  	}
  }

  while(q--) {
  	int l, r; cin >> l >> r;
    --l; --r;
    int ans = 1e9;
    // for(int id = 0; id < 6; id++) {
    //   int ops = 0;
    //   for(int i = l; i <= r; i++) {
    //   	ops += s[i] != beauty[id][i];
    //   }
    //   ans = min(ans, ops);
    // }
    // cout << ans << "\n";
    for(int id = 0; id < 6; id++) {
      if(l == 0) {
      	ans = min(ans, pre_cal[id][r]);
      }
      else {
      	ans = min(ans, pre_cal[id][r] - pre_cal[id][l - 1]);
      }
    }
    cout << ans << "\n";
  }
  return 0;
}

// O(M * 6)