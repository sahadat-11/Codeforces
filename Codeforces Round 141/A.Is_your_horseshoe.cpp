//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
    int a[4];
    set<int> st;
    for(int i = 0; i < 4; i++) {
      cin >> a[i];
      st.insert(a[i]);
    } 
    cout << 4 - st.size();
  return 0;
}