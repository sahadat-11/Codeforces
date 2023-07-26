//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a[6];
  int sum = 0;
  for(int i = 1; i <= 5; i++) {
    cin >> a[i];
    sum += a[i];
  } 
  if(sum % 5 == 0 and sum > 0) cout << sum / 5;
  else cout << -1;
  
  return 0; 
}
