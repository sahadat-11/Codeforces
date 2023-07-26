//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   int sum = 0;
   for(int i = 0; i < n; i++) {
      sum += (s[i] - 'a' + 1);
   }
   //cout << sum << endl;
   if(n == 1) {
      cout << "Bob " << sum << "\n";
   }
   else {
      cout << "Alice ";
      if(n % 2) sum -= 2 * min((s[0] - 'a' + 1), (s[n - 1] - 'a' + 1)); // if odd bob find 1 character;
                           // 2 mul because this value add in above sum variable
      cout << sum << "\n";
   }
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


// approach 2:

#include <bits/stdc++.h>
using namespace std;
void solve(){
   string s;
   cin >> s;
   int tot = 0;
   for(char c : s){
      tot += (c - 'a') + 1;
   }
   if(s.size() & 1){
      tot -= 2 * (min(s.front() - 'a', s.back() - 'a') + 1);
   }
   if(tot < 0){
      cout << "Bob " << (-tot) << '\n';
   } else {
      cout << "Alice " << tot << '\n';
   }
}

int main(){
   ios_base::sync_with_stdio(false), cin.tie(nullptr);
   int T;
   cin >> T;
   while(T--) solve();
}