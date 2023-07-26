//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  map<int, int> mp;
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[i] = a[i];
    if(i == a[i]) cnt++;
  } 
  int cnt1 = 0;
  for(int i = 0; i < n; i++) {
    int x = mp[i];
    if(mp[x] == i) cnt1++;
  }
  //for(int i = 0; i < n; i++) cout << i << " " << mp[i] << endl;
  //cout << cnt << " " << cnt1;
  if(cnt1 > cnt) cout << min(n, cnt + 2);
  else cout << min(n, cnt + 1);
  return 0; 
}
// approach 2:
#include<bits/stdc++.h>
using namespace std;
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n);
  int cur = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    cur += a[i] == i;
  }
  int ans = cur;
  for (int i = 0; i < n; i++) {
    if (i != a[i]) {
      if (a[a[i]] == i) {
        ans = max(ans, cur + 2);
      }
      else ans = max(ans, cur + 1);
    }
  }
  cout << ans << '\n';
  return 0;
}
// approach 3:

#include<bits/stdc++.h>
using namespace std;
int main()
{
    ll n;
  cin>>n ;
  ll i,a[n],c=0,f=0;
  for(i=0;i<n;i++)
  {
            cin>>a[i];
      if(i==a[i])
        c++;
  }
  for(i=0;i<n;i++)
  {
    if(a[a[i]]==i && a[i]!=i)
    {
              f=1;
        break;
    }
  }
  if(f && c!=n)
    cout<<c+2<<endl;
  else if(c==n)
    cout<<c<<endl;
  else
    cout<<c+1<<endl;
}
