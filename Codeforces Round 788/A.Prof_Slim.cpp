//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool solve() {
   int n; cin >> n; int a[n + 1];
   for(int i = 0; i < n; i++) cin >> a[i];
   int neg = 0;
   for(int i = 0; i < n; i++) {
     if(a[i] < 0) {
       neg++;
       a[i] = -a[i];
     }
   }
   for(int i = 0; i < neg - 1; i++) {
     if(a[i] < a[i + 1]) return false;
   }
   for(int i = neg; i < n - 1; i++) {
     if(a[i] > a[i + 1]) return false;
   }
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
     if(solve()) cout << "YES\n";
     else cout << "NO\n";
   }
    return 0;
}

// approach 2:

#include <iostream>
using namespace std;

int a[100000];

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int k = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (a[i] < 0) k++;
      a[i] = abs(a[i]);
    }
    for (int i = 0; i < k; i++) a[i] = -a[i]; // 1st k element asencending kora
    bool tr = true;
    for (int i = 0; i <n - 1; i++) {
      if (a[i] > a[i + 1]) tr = false;
    }
    if (tr) cout << "YES" << endl;
    else cout << "NO" << endl;
  }


// We can notice that to make the array sorted we must move all the negative signs to the beginning of the array.tie
// So let's say the number of negative elements is k. Then we must check that the first k
// elements are non-increasing and the remaining elements are non-decreasing.