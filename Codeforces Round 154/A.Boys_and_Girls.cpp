//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt","r",stdin);
  freopen("output.txt","w",stdout);
  int b, g; cin >> b >> g;
  for(int i = 0; i < b - g; i++) cout << 'B';
  for(int i = 0; i < min(b, g); i++) {
    cout << "GB";
  }
  for(int i = 0; i < g - b; i++) cout << 'G';

  return 0;
}
