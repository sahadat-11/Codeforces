//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[7];
  for(int i = 0; i < 7; i++) cin >> a[i];
  int i = 0, sum = 0;
  while(1) {
    sum += a[i % 7];
    if(sum >= n) break;
    i++;
  }
  cout << i % 7 + 1;
  return 0; 
}

// approach 2:
//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000000
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n; int a[7];
    for(int i = 0; i < 7; i++) cin >> a[i];
    int sum = 0, cnt = 0;
    for(int i = 0;; i++) {
        sum += a[i % 7];
        cnt++;
        if(sum >= n) break;
    }
    int ans = cnt % 7;
    if(ans == 0) cout << 7 << "\n";
    else cout << ans << "\n";
    return 0;
} 

