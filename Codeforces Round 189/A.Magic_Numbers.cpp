//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a; cin >> a;
  bool flag = true;
  int one = count(a.begin(), a.end(), '1');
  int four = count(a.begin(), a.end(), '4');
  if(one + four != a.size()) flag = false;
  for(int i = 0; i < a.size(); i++) {
    bool f = false;
    if(a[i] == '4') {
      if(a[i - 1] == '1') f = true;
      if(a[i - 1] == '4' and a[i - 2] == '1') f = true;
      if(!f) flag = false;
    } 
  }
  if(flag) cout << "YES";
  else cout << "NO";
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main() {
  long long n;
  cin >> n;
  while (n != 0) {
    if (n % 10 == 1) n /= 10;
    else if (n % 100 == 14) n /= 100;
    else if (n % 1000 == 144) n /= 1000;
    else {
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
}