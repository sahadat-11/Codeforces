//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    int even = 0, odd = 0;
    for(int i = 0; i < n; i++) {
        if(a[i] % 2) odd++;
        else even++;
    }
    sort(a, a + n);
    int x = a[0];
    if(x % 2) cout << "YES\n";
    else if(x % 2 == 0 and odd == 0) cout << "YES\n";
    else cout << "NO\n"; // x even and odd >= 1
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

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int as[200005];
bool solve(){
  int N;
  scanf("%d",&N);
  for(int i=0;i<N;i++){
    scanf("%d",&as[i]);
  }
  std::sort(as,as+N);
  if(as[0]%2){
    return true;
  }
  for(int i=0;i<N;i++){
    if(as[i]%2) return false;
  }
  return true;
}
int main(){
  int T;
  scanf("%d",&T);
  while(T--){
    printf("%s\n",solve()?"YES":"NO");
  }
}
