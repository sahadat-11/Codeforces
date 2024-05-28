//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int n; cin >> n; int a[n + 1] = {0};
	for(int i = 1; i <= n; i++) cin >> a[i];
	sort(a, a + n + 1);
	int q; cin >> q;
	while(q--) {
		int x; cin >> x;
		cout << upper_bound(a, a + n + 1, x) - a - 1<< "\n";
	}
    return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  sort(a, a + n);
  int q; cin >> q;
  while(q--) {
    int x; cin >> x;
    cout << upper_bound(a, a + n, x) - a << "\n";
  }
  return 0;
}

