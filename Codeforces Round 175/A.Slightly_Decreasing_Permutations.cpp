//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  for(int i = 0; i < k; i++) cout << n - i << " ";
  for(int i = 1; i <= n - k; i++) cout << i << " ";
  
  return 0; 
}