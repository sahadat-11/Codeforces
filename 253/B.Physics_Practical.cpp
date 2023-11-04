//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  freopen("input.txt", "r", stdin); 
  freopen("output.txt", "w", stdout); 
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  //for(int i = 0; i < n; i++) cout << a[i] << " ";
  int i = 0, j = 0, ans = 0;
  while(j < n) {
    if(a[i] * 2 >= a[j]) {
       ans = max(ans, j - i + 1);
       j++;
    }
    else i++;
  }
  cout << n - ans << "\n";
  return 0;
}
