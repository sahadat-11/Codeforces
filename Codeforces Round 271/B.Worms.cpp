//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n; int a[n];
  vector<int> v;
  int sum = 0;
  v.push_back(0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    v.push_back(sum);
  }
  //for(auto u : v) cout << u << " ";
  int q; cin >> q;
  for(int i = 0; i < q; i++) {
    int x; cin >> x;
    cout << lower_bound(v.begin(), v.end(), x) - v.begin() << "\n";
  }
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int a[100005],b[1000005];
int main(){
  int n,m;
  cin>>n;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    a[i]+=a[i-1];
    for(int j=a[i-1]+1;j<=a[i];j++){
      b[j]=i;
    }
  } 
  cin>>m;
  for(int i=1;i<=m;i++){
    int x;
    cin>>x;
    cout<<b[x]<<endl;
  } 
  
  return 0; 
}
