//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int n, m; cin >> n >> m;
   string s[n]; int a[m];
   for(int i = 0; i < n; i++) cin >> s[i];
   for(int i = 0; i < m; i++) cin >> a[i];
   int sum = 0;
   for(int j = 0; j < m; j++) {
   	 int c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, mx = 0;;
   	 for(int i = 0; i < n; i++) {
   	 	if(s[i][j] == 'A') c1++;
   	 	if(s[i][j] == 'B') c2++;
   	 	if(s[i][j] == 'C') c3++;
   	 	if(s[i][j] == 'D') c4++;
   	 	if(s[i][j] == 'E') c5++;
   	 }
   	 mx = max(mx, c1);
   	 mx = max(mx, c2);
   	 mx = max(mx, c3);
   	 mx = max(mx, c4);
   	 mx = max(mx, c5);
   	 sum += (mx * a[j]);
   }
   cout << sum << "\n";
   return 0;
}

// approach 2:

//In The Name of ALLAH

#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
   sahadat();
   
   int n,m;cin>>n>>m;
   string s[n];ll a[m];
   for(ll i=0;i<n;i++) cin>>s[i];
   for(ll i=0;i<m;i++)cin>>a[i];
  
   ll ans=0;
   for(int i=0;i<m;i++){
    map<char,int>mp;
    int  mx=0;
   for(int j=0;j<n;j++){
        mp[s[j][i]]++;

        mx=max(mx,mp[s[j][i]]);
   }
    ans+=mx*a[i];
  }
  cout<<ans<<endl;
 
   
	return 0;
}