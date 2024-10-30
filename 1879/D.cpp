// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int N = 1e5 + 7, mod = 998244353;
// #define int long long
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int n; cin >> n;
//   vector<int> a(n + 1);
//   for(int i = 1; i <= n; i++) {
//     cin >> a[i];
//   }
//   int ans = 0;
//   for(int i = 1; i <= n; i++) {
//     for(int j = i; j <= n; j++) {
//       int XOR = 0;
//       for(int k = i; k <= j; k++) {
//         XOR = (XOR ^ a[k]);
//       }
//       //cout << XOR << " " << (j - i + 1) << "\n";
//       ans += (XOR * (j - i + 1));
//       ans %= mod;
//     }
//   }
//   cout << ans << "\n";
//   return 0;
// }

// // O(N * N * N);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 7, mod = 998244353;
#define int long long
int prexor[N];

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  vector<int> a(n + 1);
  for(int i = 1; i <= n; i++) {
    cin >> a[i];
    prexor[i] = (prexor[i - 1] ^ a[i]);
  }
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    for(int j = i; j <= n; j++) {
      int XOR = (prexor[j] ^ prexor[i - 1]);
      ans += (XOR * (j - i + 1));
      ans %= mod;
    }
  }
  cout << ans << "\n";
  return 0;
}

// O(N * N);



#include<bits/stdc++.h>
using namespace std;
#define int long long
typedef long long ll;
const int N=3e5+10;
const ll mod=998244353;

int a[N],sum1[N][2],sum2[N][2];

signed main()
{
	int n; cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]^=a[i-1];
	}

	int ans=0;
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<30;j++)
		{
			int c=(a[i]>>j)&1;
			(ans+=((i*sum1[j][c^1]%mod-sum2[j][c^1]%mod)%mod+mod)%mod*(1<<j)%mod)%=mod;
			sum1[j][c]++;
			sum2[j][c]+=i;
		}
	}

	cout<<ans<<endl;

	return 0;
}
