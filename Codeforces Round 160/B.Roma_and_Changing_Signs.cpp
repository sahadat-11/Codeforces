//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  int neg = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] < 0) neg++;
  }
  for(int i = 0; i < min(k, neg); i++) a[i] = -a[i];
  int sum = 0;
  k -= neg;
  int minpos = *min_element(a, a + n);
  //cout << minpos << endl;
  //cout << k << endl;
  for(int i = 0; i < n; i++) sum += a[i];
  if(k > 0 and k % 2 == 0) cout << sum; 
  else if(k > 0 and k % 2) cout << sum - 2 * minpos << '\n';
  else cout << sum; 
   
  return 0; 
}
// approach 2:

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void solve() {
    ll n, k;
    cin >> n >> k;
    vector <ll> v(n);
    for (ll i = 0; i < n; i++) cin >> v[i];
    sort(v.begin(), v.end());
    ll i = 0;
    while (v[i] < 0 && k > 0) {
        v[i] = v[i] * (-1);
        k--; i++;
    }
    sort(v.begin(), v.end());
    if (k % 2 != 0) v[0] = v[0] * (-1);
    ll ans = 0;
    for (ll i = 0; i < n; i++) ans += v[i];
    cout << ans;
}

int main()
{
    solve();
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, k; cin >> n >> k; int a[n];
    for(int i = 0; i < n; i++) cin >> a[i];
    sort(a, a + n);
    for(int i = 0; i < n; i++){
        if(a[i] < 0 && k > 0){
            a[i] =- a[i];
            k--;
        }
    }
    if(k & 1){
        sort(a, a + n);
        a[0] =- a[0];
    }
    int sum = 0;
    for (int j = 0; j < n; j++)
      sum = sum + a[j];
      cout << sum;
}