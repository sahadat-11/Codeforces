//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int sod(int x) {
  int sum = 0;
  while(x) {
    sum += x % 10;
    x /= 10;
  }
  return sum;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
       int n, q; cin >> n >> q; int a[n + 1];
       for(int i = 1; i <= n; i++) cin >> a[i];
       set<int> st;
       for(int i = 1; i <= n; i++) {
         st.insert(i);
       }
       //for(auto u : st) cout << u << "\n";
       while(q--) {
         int choice; cin >> choice;
         if(choice == 1) {
           int l, r; cin >> l >> r;
           if(st.empty()) continue;
           auto it = st.lower_bound(l); // indicate index
           //cout << *it << "\n";
           vector<int> v;
           while(it != st.end() and (*it) <= r) {
             a[(*it)] = sod(a[(*it)]);// indicate value in this index
             if(a[(*it)] < 10) {
             v.push_back(*it);
            }
            it++;
           }
           if(!v.empty()) {
             for(auto u : v) {
               st.erase(st.find(u));
             }
           }
         }
         else {
           int x; cin >> x;
           cout << a[x] << "\n";
         }
       }
    }
    return 0;
} 

#include <bits/stdc++.h>
using namespace std;
int main() {
  int t;  cin >> t;
  while (t--) {
    int n, q;
    scanf("%d %d", & n, & q);
    vector < int > s(n + 10);
    set < int > se;
    for (int i = 1; i <= n; i++) {
      scanf("%d", & s[i]);
      if (s[i] >= 10) se.insert(i);
    }
    while (q--) {
      int op, x, y;
      scanf("%d %d", & op, & x);
      if (op == 1) {
        scanf("%d", & y);
        auto it = se.lower_bound(x);
        while (it != se.end() && ( * it <= y)) {
          int t = 0;
          while (s[ * it] > 0) {
            t += (s[ * it] % 10);
            s[ * it] /= 10;
          }
          s[ * it] = t;
          if (s[ * it] < 10) {
            it = se.erase(it);
          } else it++;
        }
      } else printf("%d\n", s[x]);
    }
  }
  return 0;
}