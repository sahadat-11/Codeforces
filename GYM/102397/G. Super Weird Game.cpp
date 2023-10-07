//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n, k; cin >> n >> k; int a[n], b[n];
  map<int, int> mp1, mp2, mp3, mp4;
  for(int i = 0; i < n; i++) {
  	cin >> a[i];
  	mp1[a[i]]++;
  }
  for(int i = 0; i < n; i++) {
  	cin >> b[i];
  	mp3[b[i]]++;
  }
  int cnt1 = 0, cnt2 = 0;
  for(int i = 0; i < n; i++) {
  	int x = k - a[i];
  	cnt1 += (mp1[x] - mp2[x]);
  	mp2[a[i]]++;
  }
  for(int i = 0; i < n; i++) {
  	int x = k - b[i];
  	cnt2 += (mp3[x] - mp4[x]);
  	mp4[b[i]]++;
  }
  //cout << cnt1 << " " << cnt2 << "\n";
  if(cnt1 > cnt2) cout << "Mahmoud";
  else if(cnt1 < cnt2) cout << "Bashar";
  else cout << "Draw";
  return 0;
}