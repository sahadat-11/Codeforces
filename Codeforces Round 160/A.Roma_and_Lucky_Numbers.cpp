//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n];
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    string s = to_string(a[i]);
    int four = count(s.begin(), s.end(), '4');
    int seven = count(s.begin(), s.end(), '7');
    if(four + seven <= k) cnt++;
  }
  cout << cnt << "\n";
  
  return 0; 
}

#include<bits/stdc++.h>
#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n, k;
  cin >> n >> k;
  int res = 0;
  while (n--) {
    int num;
    cin >> num;
    int nn = 0;
    while (num) {
      if (num % 10 == 4 || num % 10 == 7) nn++;
      num /= 10;
    }
    if (nn <= k) res++;
  }
  cout << res;
}