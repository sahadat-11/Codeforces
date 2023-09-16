 //In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool check(string s, string a, string b) {
   int n = s.size(), n1 = a.size(), n2 = b.size();
   int pos1 = s.find(a);
   if(pos1 == -1) return false;
   int pos2 = s.find(b, pos1 + n1);
   if(pos2 == -1) return false;
   return true;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string forward, a, b; cin >> forward >> a >> b;
   string backward = string(forward.rbegin(), forward.rend());
   //cout << forward << " " << backward << endl;
   bool x = check(forward, a, b);
   bool y = check(backward, a, b);
   //cout << x << " " << y << endl;
   if(x and y) cout << "both";
   else if(x) cout << "forward";
   else if(y) cout << "backward";
   else cout << "fantasy";
   return 0;
}
