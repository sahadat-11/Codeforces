//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int h1, h2, m1, m2; char c;
  cin >> h1 >> c >> m1 >> h2 >> c >> m2;
  int total = (h2 * 60 + m2) - (h1 * 60 + m1);
  if(total < 0) total += (24 * 60);
  //cout << total << endl;
  total /= 2;
  int mm = total % 60;
  int hh = total / 60;
  //cout << hh << " " << mm << endl;
  mm += m1;
  hh = h1 + hh + mm / 60;
  mm %= 60;
  if(hh < 10) cout << 0;
  cout << hh << ":";
  if(mm < 10) cout << 0;
  cout << mm;
  return 0;
}