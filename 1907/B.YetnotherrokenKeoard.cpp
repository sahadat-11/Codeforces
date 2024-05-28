// //In The Name of ALLAH
// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long
// int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int t; cin >> t;
//    while(t--) {
//       string s; cin >> s;
//       string ans;
//       for(int i = 0; i < s.size(); i++) {
//          if(s[i] == 'B') {
//             for(int j = ans.size() - 1; j >= 0; j--) {
//                 if(ans[j] >= 'A' and ans[j] <= 'Z') {
//                   ans.erase(ans.begin() + j);
//                   break;
//                 }
//             }
//          }
//          else if(s[i] == 'b'){
//             for(int j = ans.size() - 1; j >= 0; j--) {
//                 if(ans[j] >= 'a' and ans[j] <= 'z') {
//                   ans.erase(ans.begin() + j);
//                   break;
//                 }
//             }
//          }
//          else {
//             ans.push_back(s[i]);
//          }
//       }
//       cout << ans << "\n";
//    }
//    return 0;
// }

// // O(n * n)


//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      string s; cin >> s;
      stack<int> up, lo;
      set<int> dlt;
      for(int i = 0; i < s.size(); i++) {
         if(s[i] == 'B') {
            if(up.size()) {
               dlt.insert(up.top());
               up.pop();
            }
            dlt.insert(i); // this is not print
         }
         else if(s[i] == 'b'){
            if(lo.size()) {
               dlt.insert(lo.top());
               lo.pop();
            }
            dlt.insert(i); // this is not print
         }
         else if(s[i] >= 'A' and s[i] <= 'Z') {
            up.push(i);
         }
         else {
            lo.push(i);
         }
      }
      for(int i = 0; i < s.size(); i++) {
         if(dlt.find(i) == dlt.end()) {
            cout << s[i];
         }
      }
      cout << "\n";
   }
   return 0;
}

// O(n * log(n))


#include <bits/stdc++.h>
using namespace std;
int main() {
  int t; cin >> t;
  while (t--) {
    string s; cin >> s;
    string ans;
    int c1 = 0, c2 = 0;
    for (int i = s.size() - 1; i >= 0; i--) {
      if (s[i] == 'b') c1++;
      else if (s[i] == 'B') c2++;
      else if (islower(s[i])) {
        if (c1) c1--;
        else ans += s[i];
      } 
      else {
        if (c2) c2--;
        else ans += s[i];
      }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << endl;
  }
}