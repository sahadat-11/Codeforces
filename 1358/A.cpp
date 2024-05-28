// //In The Name of ALLAH
// #include<bits/stdc++.h>
// using namespace std;
// const int mod = 1e9 + 7;
// #define int long long
// void solve() {
//    int n, l, r; cin >> n >> l >> r;
//    vector<int> v(n);
//    for(int i = 0; i < n; i++) cin >> v[i];
//    int cnt = 0;
//    for(int i = 0; i < n; i++) {
//    	 for(int j = i + 1; j < n; j++) {
//    	 	int x = v[i] + v[j];
//    	 	if(x >= l and x <= r) cnt++;
//    	 }
//    }
//    cout << cnt << "\n";
// }
// int32_t main() {
//   ios_base::sync_with_stdio(0);
//   cin.tie(0);
//   int t = 1; 
//   cin >> t;
//   while(t--) {
//     solve();
//   }
//   return 0;
// }

// // O(n * n);


//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, l, r; cin >> n >> l >> r;
   vector<int> v(n);
   for(int i = 0; i < n; i++) cin >> v[i];
   sort(v.begin(), v.end());
   int cnt = 0;
   map<int, int> mp1, mp2;
   for(int i = 0; i < n; i++) { 
 	 int ub1 = upper_bound(v.begin() + i + 1, v.end(), r - v[i]) - v.begin();
 	 int ub2 = lower_bound(v.begin() + i + 1, v.end(), l - v[i]) - v.begin();
 	 cnt += (ub1 - ub2);
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



// #include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,l,r;
    cin>>n>>l>>r;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    long long int pairs=0;
    for(int i=0;i<n;i++)
    {
        int x=upper_bound(a,a+n,r-a[i])-a;
        int y=lower_bound(a,a+n,l-a[i])-a;
        pairs+=(x-y)*1LL;
        if(a[i]+a[i]>=l && a[i]+a[i]<=r)
            pairs--;
    }
    cout<<pairs/2<<endl;
    }
}
