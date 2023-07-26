//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
  int n; cin >> n;
  for(int i = 2; i * i <= n; i++){
    if(n % i == 0){
      int d = n / i;
      for(int j = i+1; j * j < d; j++){
        if(d % j == 0){
          cout<<"YES"<<endl;
          cout<<i<<" "<<j<<" "<<d/j<<endl;
          return;
        }
      }
    }
  }
  cout<<"NO"<<endl;
}
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int ts; cin >> ts;
  while(ts--) {
   solve();
 }
  return 0;
}