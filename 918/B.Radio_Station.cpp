//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  map<string, string> mp;
  while(n--) {
    string a, b; cin >> a >> b;
    b += ';';
    mp[b] = a;
  }
  //for(auto u : mp) cout << u.first << " " << u.second << endl;
  while(m--) {
    string a, b; cin >> a >> b;
    cout << a << " " << b << "  #" << mp[b] << "\n";
  }
  return 0; 
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m;
  map<string, string> mp;
  while(n--) {
    string a, b; cin >> a >> b;
    mp[b] = a;
  }
  //for(auto u : mp) cout << u.first << " " << u.second << endl;
  while(m--) {
    string a, b; cin >> a >> b;
    //b.pop_back();
    b = b.substr(0, b.size() - 1);
    cout << a << " " << b << ";  #" << mp[b] << "\n";
  }
  return 0; 
}
//https://stackoverflow.com/questions/2310939/remove-last-character-from-c-string