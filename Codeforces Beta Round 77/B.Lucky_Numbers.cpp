// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// #define ll long long
// vector<int> v;
// void pre() {
//   for(int i = 1; i <= 1e8; i++) {
//     int n = i;
//     string x = to_string(n);
//     int sz = x.size();
//     int four = count(x.begin(), x.end(), '4');
//     int seven = count(x.begin(), x.end(), '7');
//     if((four + seven == sz) and four == seven and four >= 1) v.push_back(n);
//   }
// }
// int main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   pre();
//   int n; cin >> n;
//   int lb = lower_bound(v.begin(), v.end(), n) - v.begin();
//   cout << v[lb];
//   return 0;
// }


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  vector<ll> v;
  for(int i = 2; i <= 10; i += 2) {
    string s;
    for(int j = 0; j < i / 2; j++) s += '4';
    for(int j = 0; j < i / 2; j++) s += '7';
    do {
      v.push_back(stoll(s)); // string to long long
    } while(next_permutation(s.begin(), s.end()));// all possible combination
  }
  int n; cin >> n;
  cout << *(lower_bound(v.begin(), v.end(), n));
  return 0;
}
 