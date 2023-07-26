//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int mne = *min_element(a, a + n);
  int mxe = *max_element(a, a + n);
  int mxi = max_element(a, a + n) - a;
  //cout << mne << " " << mxe;
  int mni;
  for(int i = 0; i < n; i++) {
    if(a[i] == mne) mni = i;
  }
  //cout << mxi << " " << mni;
  if(mxi > mni) cout << (mxi - 1) + (n - mni - 1);
  else cout << (mxi) + (n - mni - 1);
  return 0;
}


// approach 2:

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,y;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
    cin >> a[i];
  if (a[i] > a[x]) x = i;
    if (a[i] <= a[y]) y = i;
}
    cout <<n - y + x - (y<x)- 1;
}
