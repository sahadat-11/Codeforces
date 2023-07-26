//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  for(int i = 0; i < n; i++) {
    cout << 3 * n + i << " ";
  }
  return 0;
}

// approach 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
     int n;
     cin >> n;
     for(int i = n; i < 2*n; i++) cout << i <<" ";
     
  return 0;
}

// approach 3:
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll n;
  cin >> n;
  for (int i = 0; i < n; i++){
    cout << n + i << " ";
  }
}

