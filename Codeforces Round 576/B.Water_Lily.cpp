//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int h, l; cin >> h >> l;
    double ans = ((1.0 * l * l) - (1.0 * h * h)) / (2 * h);
    cout << fixed << setprecision(13) << ans << "\n";
    return 0;
} 

// approach 2:
#include<bits/stdc++.h>
using namespace std;
int main() {
  long double h, l;
  cin >> h >> l;
  cout << setprecision(13) << ((l * l) - (h * h)) / (2 * h);
  return 0;
}