//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--) {
      int n; cin >> n; int a[n];
      for(int i = 0; i < n; i++) cin >> a[i];
      sort(a, a + n);
      cout << max((1ll * a[0] * a[1]), (1ll * a[n - 2] * a[n - 1])) << "\n"; 
    }
	return 0;
} 

// approach 2:

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    int q;
    cin>>q;
    while(q--){
      int n;
      cin>>n;
      ll a[n];
      for(int i=0;i<n;i++) cin>>a[i];
      sort(a,a+n);
      ll ans=max(a[0]*a[1],a[n-1]*a[n-2]);
      cout<<ans<<"\n";
    }
  return 0;
}
