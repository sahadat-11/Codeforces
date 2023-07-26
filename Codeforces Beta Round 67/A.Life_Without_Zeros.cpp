//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b; cin >> a >> b;
  int c = a + b;
 // cout << a << " " << b << " " << c;
  string aa = to_string(a);
  string bb = to_string(b);
  string cc = to_string(c);
  //cout << aa << " " << bb << " " << cc << " ";
  aa.erase(remove(aa.begin(), aa.end(), '0'), aa.end());
  bb.erase(remove(bb.begin(), bb.end(), '0'), bb.end());
  cc.erase(remove(cc.begin(), cc.end(), '0'), cc.end());
  //cout << aa << " " << bb << " " << cc << " ";
  if(stoi(aa) + stoi(bb) == stoi(cc)) cout << "YES\n";
  else cout << "NO\n";
  return 0; 
}

// approach 2:

#include <iostream>
using namespace std;
int removeZeros(int num) {
  int ret = 0, ten = 1;
  while (num) {
    int dig = num % 10;
    num /= 10;
    if (dig) {
      ret += dig * ten;
      ten *= 10;
    }
  }
  return ret;
}
int main() {
  int a, b, c;
  cin >> a >> b >> c;
  c = a + b;
  a = removeZeros(a);
  b = removeZeros(b);
  c = removeZeros(c);
  if (a + b == c) cout << "YES" << endl;
  else cout << "NO" << endl;
}