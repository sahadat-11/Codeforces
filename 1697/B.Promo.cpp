//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
ll pre[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  //sort(a + 1, a + n + 1, greater<int> ());
  sort(a + 1, a + n + 1); 
 // for(int i = 1; i <= n; i++) cout << a[i] << " ";
  for(int i = 1; i <= n; i++) { // 1 based index
  	pre[i] = pre[i - 1] + a[i];
  }
  while(q--) { 
  	int x, y; cin >> x >> y;
    cout << pre[n - x + y] - pre[n - x] << "\n";
  }
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e6 + 7;
ll pre[N];
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, q; cin >> n >> q; int a[n + 1];
  for(int i = 1; i <= n; i++) cin >> a[i];
  sort(a + 1, a + n + 1, greater<int> ());
  //sort(a + 1, a + n + 1); 
  //for(int i = 1; i <= n; i++) cout << a[i] << " ";
  for(int i = 1; i <= n; i++) { // 1 based index
    pre[i] = pre[i - 1] + a[i];
  }
  while(q--) { 
    int x, y; cin >> x >> y;
    //cout << pre[x] << " " << pre[x - y] << endl;
    cout << pre[x] - pre[x - y] << "\n";
  }
  return 0;
}
