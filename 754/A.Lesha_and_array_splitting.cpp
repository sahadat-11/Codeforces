// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n; cin >> n; int a[n + 1];
//    for(int i = 1; i <= n; i++) cin >> a[i];
//    int one = 0;
//    for(int i = 1; i <= n; i++) {
//    	 if(a[i] == 0) one++;
//    }
//    if(n == one) {
//    	 cout << "NO\n"; return;
//    }
//    cout << "YES\n";
//    cout << n - one << "\n";
//    for(int i = 1; i <= n - 2; i++) {
//    	 // if(a[i] != 0 and a[i + 1] != 0) {
//    	 // 	cout << i << " " << i << "\n";
//    	 // }
//    	 // else{
//    	 // 	cout << i << " " << i + 1 << "\n"; i++;
//    	 // }
//    	    if(a[i] == 0) {
//    	    	int x = 0;
//    	    	while(a[i] == 0) {
//    	    		i++; x++;
//    	    	}
//    	    	cout << i - one << " " <<  i << "\n";
//    	    }
//    	    else{
//    	        cout << i << " " << i << "\n";
//    	    }
//    }
//    if(a[n] != 0) {
//    	 cout << n - 1 << " " << n - 1 << "\n";
//    	 cout << n << " " << n << "\n";
//    }
//    else {
//    	 cout << n - 1 << " " << n << "\n";
//    }
//    // int sum = 0, pre = 1;
//    // vector<pair<int, int>> v;
//    // for(int i = 1; i <= n; i++) {
//    //    sum += a[i];
//    //    if(sum == 0 and pre != i) {
//    //       sum = a[i];
//    //       pre = i - 1;
//    //       v.push_back({pre, i});
//    //    }
//    // }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }


// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define ll long long
// void solve() {
//    int n; cin >> n; int a[n + 1];
//    for(int i = 1; i <= n; i++) cin >> a[i];
//    int one = 0;
//    for(int i = 1; i <= n; i++) {
//    	 if(a[i] == 0) one++;
//    }
//    if(n == one) {
//    	 cout << "NO\n"; return;
//    }
//    cout << "YES\n";
//    int pre_sum[n + 1] = {0};
//    for(int i = 1; i <= n; i++) {
//    	 pre_sum[i] = pre_sum[i - 1] + a[i];
//    }
//    if(pre_sum[n] != 0) {
//    	cout << 1 << "\n";
//    	cout << 1 << " " << n << "\n";
//    }
//    else {
//    	cout << 2 << "\n";
//    	int i;
//    	for(i = 1; i <= n; i++) {
//    	  if(pre_sum[i] != 0) {
//    	  	cout << 1 << " " << i << "\n";
//    	  	break;
//    	  }
//    	}
//    	cout << i + 1 << " " << n << "\n";
//    }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   //cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }
// // https://prnt.sc/6vLWlnH_iPNU


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define ll long long
void solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 1; i <= n; i++) cin >> a[i];
   int zero = 0, sum = 0 ;
   for(int i = 1; i <= n; i++) {
     if(a[i] == 0) zero++;
     sum += a[i];
   }
   if(n == zero) {
     cout << "NO\n"; return;
   }
   cout << "YES\n";
   if(sum != 0) {
     cout << 1 << " " << n << "\n";
     return;
   }
   int i;
   sum = 0;
   for(i = 1; i <= n; i++) {
     sum += a[i];
     if(sum) {
       cout << 1 << " " << i << "\n"; break;
     }
   }
   cout << i + 1 << " " << n << "\n";
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}
