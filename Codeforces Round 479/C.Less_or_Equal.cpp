//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n, k; cin >> n >> k; int a[n];
  map<int, int> mp;

  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
  }
  sort(a, a + n);
  if(k == 0 and a[0] != 1) {
    cout << 1; return 0;
  }

  int cnt = 0;
  for(auto u : mp) {
    cnt += u.second;
    if(cnt > k) {
      cout << -1; return 0;
    }
    if(cnt == k) {
      cout << u.first; return 0;
    }
  }

  return 0;
}

// approach 2:

#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{

    ll n,k,i,j,m,x,y,ara[200000];
    cin>>n>>k;
    for(i=1;i<=n;i++)
    {
        cin>>ara[i];
    }
    ara[0]=1;
    sort(ara,ara+n+1);

    if(ara[k]!=ara[k+1])
    {
        cout<<ara[k];
    }
    else
    {
        cout<<-1;
    }

}
