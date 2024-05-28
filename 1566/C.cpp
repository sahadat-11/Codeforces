//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n; string a, b; cin >> n >> a >> b;
   int one = 0, zero = 0, cnt = 0;
   for(int i = 0; i < n; i++) {
   	if(a[i] != b[i]) {
   	  cnt += 2; one = 0, zero = 0;
   	}
   	else if(a[i] == b[i] and a[i] == '1' and zero) {
      cnt += 1; zero = 0;
   	}
   	else if(a[i] == b[i] and a[i] == '1' and !zero) {
      one = 1;
   	}
   	else if(a[i] == b[i] and a[i] == '0' and one) {
      cnt += 2; one = 0;
   	}
   	else if(a[i] == b[i] and a[i] == '0' and !one) {
      cnt += 1, zero = 1;
   	}
   }
   cout << cnt << "\n";
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


#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string a,b;
    cin>>n>>a>>b;
    int ans=0;

    for (int i = 0; i < n; ++i)
    {
     if (a[i]!=b[i])
     {
       ans+=2;
     }
     else if (a[i]==b[i]&&a[i+1]==b[i+1]&&a[i]!=a[i+1]&&i<n-1)
     {
       ans+=2;
       i++;
     }
     else if(a[i]=='0'){
      ans++;
     }
    }
     
cout<<ans<<endl;


  }
}