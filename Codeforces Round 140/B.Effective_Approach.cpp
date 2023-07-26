//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  
  int n; cin >> n; int a[n + 1];
  map<int, int> mp;
  for(int i = 1; i <= n; i++) {
    cin >> a[i]; 
    mp[a[i]] = i;
  }
  int m; cin >> m; int b[m + 1];
  ll sum1 = 0, sum2 = 0;
  for(int i = 1; i <= m; i++) {
    cin >> b[i];
    sum1 += mp[b[i]];
    sum2 += (n - mp[b[i]] + 1);
  }

  cout << sum1 << " " << sum2;
  return 0;
}


// approach 2:

#include<stdio.h>
int main() {
  int n, m, k, j;
  long long int a = 0, b = 0;
  int arr[100001];
  scanf("%d", & n);
  for (int i = 0; i < n; i++) {
    scanf("%d", & k);
    arr[k] = i;
  }
  scanf("%d", & m);
  for (int i = 0; i < m; i++) {
    scanf("%d", & k);
    a += arr[k] + 1;
    b += (n - arr[k]);
  }
  printf("%lli %lli", a, b);
}