//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  int n, w; cin >> n >> w; int a[n];
   map<int, int> mp;
   for(int i = 0; i < n; i++) {
     cin >> a[i];
     mp[a[i]]++;
   }
   int cnt = 0;
   int temp = w;
   int res = 0;
   while(cnt != n) {
    w = temp;
   for(auto it = mp.rbegin(); it != mp.rend(); it++) {
      while(it->first <= w and it->second > 0) {
        w -= it->first;
        it->second--;
        cnt++;
      }
    }
    res++;
   }
   cout << res << endl;
  }
  return 0;
}
// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int nW, boxW;
        cin >> nW >> boxW;
        vector<int> v(nW, 0);
        for (int i = 0; i < nW; i++) cin >> v[i];
        sort(v.begin(), v.end());
        int sp = boxW, count = 1;
        while (!v.empty()) {
            auto iter = upper_bound(v.begin(), v.end(), sp);
            //cout << *iter << endl;
            if (iter != v.begin()) {
                iter--;
                sp -= *iter;
                v.erase(iter);
            } else {
                sp = boxW;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}