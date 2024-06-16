#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x, y;
    scanf("%lld %lld", &x, &y);
    x ^= y;
    long long ans = 1;
    while (~x & 1) x >>= 1, ans <<= 1;
    printf("%lld\n", ans);
  }
  return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int x, y, t, z;
	scanf("%d", &t);
	while (t--) {
		scanf("%d %d", &x, &y);
		z = x ^ y;
		printf("%d\n", z & (-z));
	}
}
