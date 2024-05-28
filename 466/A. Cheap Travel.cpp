//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m, a, b; cin >> n >> m >> a >> b;
  int sum1 = (n / m) * b;
  if((n % m) * a > b) sum1 += b;
  else sum1 += (n % m) * a;
  int sum2 = n * a;
  cout << min(sum1, sum2);
  return 0; 
}