//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, l; cin >> n >> l; int a[n];
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }

  sort(a, a + n);
  int first = a[0] - 0;
  int last = l - a[n - 1];
  double mx = max(first, last);
  for(int i = 1; i < n; i++) {
    double d = a[i] - a[i - 1];
    mx = max(mx, d / 2);
  }
  cout << fixed << setprecision(10) << mx << "\n";
  return 0;
}

// approach 2:

#include <bits/stdc++.h>
#define pb push_back
bool comp(int a, int b) {
  return a>b;
}
using namespace std;
int n,l,m,a[1005];
int main(){
  cin>>n>>l;
  for(int i = 0;i<n;i++) cin>>a[i];
  sort(a,a+n);
  m=max(a[0],l-a[n-1])*2;
  for(int i=1;i<n;i++) m=max(m,a[i]-a[i-1]);
  printf("%lf",m/2.0);
}

