//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   vector<ll> v;
   for(int i = 1; i <= 10000000; i++) {
      if(i % 10 != 3 and i % 3 != 0) v.push_back(i);
   }
  // for(auto u : v) cout << u << " ";
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     cout << v[n - 1] << "\n";
   }
    return 0;
}

// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main(){
int t; cin >> t;
while(t--){
int x; cin >> x;
int ct=0;
int i;
for(i = 1;i <= INT_MAX; i++){
if(ct == x)break;
if(i % 3 != 0 && i % 10 != 3) ct++;
}
cout << i-1 << endl;
 }
}

// approach 3;

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   vector<ll> v;
   for(int i = 1; i <= 10000000; i++) {
      string x = to_string(i);
      int c = x.size();
      if(x[c - 1] != '3' and i % 3 != 0) v.push_back(i);
   }
  // for(auto u : v) cout << u << " ";
   int t; cin >> t;
   while(t--) {
     int n; cin >> n;
     cout << v[n - 1] << "\n";
   }
    return 0;
}