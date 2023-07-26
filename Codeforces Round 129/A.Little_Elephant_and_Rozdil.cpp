//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n], b[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = a[i];
  }
  sort(a, a + n);
  if(a[0] == a[1]) cout << "Still Rozdil";
  else {
    int x = a[0];
    for(int i = 0; i < n; i++) {
      if(x == b[i]) {
        cout << i + 1;
        return 0;
      }
    }
  }
  return 0;
}