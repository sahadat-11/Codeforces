//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; cin >> n;
   vector<int> divs;
   for(int i = 1; i * i <= n; i++) {
   	if(n % i == 0) {
   	  divs.push_back(i);
   	  if(i != n / i) {
   	  	divs.push_back(n / i);
   	  }
   	}
   }
   int sz = (int)divs.size();
   sort(divs.begin(), divs.end());
   if((int)divs.size() > 4) {
   	for(int i = 1; i < sz; i++) {
   	  for(int j = i + 1; j < sz; j++) {
        int x = divs[i], y = divs[j];
        int z = (n / (x * y));
        if(z > 1 and (n % z == 0) and x != y and y != z and x != z) {
          cout << "YES\n";
          cout << x << " " << y << " " << z << "\n";
          return;
        }
   	  }
   	}
   	cout << "NO\n";
   }
   else cout << "NO\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


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
  int t; cin >> t;
  while(t--) {
   solve();
 }
  return 0;
}