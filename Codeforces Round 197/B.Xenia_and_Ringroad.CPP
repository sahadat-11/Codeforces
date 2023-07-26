//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, m; cin >> n >> m; int a[m];
  for(int i = 0; i < m; i++) cin >> a[i];
  ll time = a[0] - 1;
  for(int i = 1; i < m; i++) {
    if(a[i] >= a[i - 1]) time += (a[i] - a[i - 1]);
    else time += (n - a[i - 1] + a[i]);
  }
  cout << time << "\n";

  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  int n, m, a = 1;
  long long int mins = 0;
  cin >> n >> m;
  while (m--) {
    int x;
    cin >> x;
    mins = mins + ((x - a) + n) % n;
    a = x;
  }
  cout << mins;
}