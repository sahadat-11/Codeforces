//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k;
  int x = n;
  vector<int> primes_facts;
  for(int i = 2; i * i <= x; i++) {
    if(x % i == 0) {
      while(x % i == 0) {
        primes_facts.push_back(i);
        x /= i;
      }
    }
  }
  if(x > 1) {//if now x is also prime greater than sqaureroot
    primes_facts.push_back(x);
  } 
  int sz = primes_facts.size();
  if(sz < k) cout << "-1\n";
  else {
    int mul = 1;
    for(int i = 0; i < k - 1; i++) {
      cout << primes_facts[i] << " ";
      mul *= primes_facts[i];
    }
    cout << n / mul << "\n";
  }
  return 0;
} 

