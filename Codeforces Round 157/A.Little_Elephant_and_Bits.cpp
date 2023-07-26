//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string s; cin >> s;
  int ind = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] == '0') {
      ind = i;
      break;
    }
  }
  //cout << ind << endl;
  s.erase(ind, 1);
  cout << s << endl;

  return 0;
}

// approach 2:
#include <bits/stdc++.h>
using namespace std; 
int main() {
  string s;
  cin >> s;
  int n = s.size(), idx = n - 1;
  for (int i = n - 1; i >= 0; i--)
    if (s[i] == '0')
      idx = i;
  for (int i = 0; i < n; i++) 
    if (i != idx) 
      cout << s[i];
}

// approach 3:
#include <iostream>
using namespace std;
int main() {
  string s;
  cin >> s;
  int k = s.find('0');
  if (k == -1) s.erase(0, 1); // not found then erase 1st element
  else s.erase(k, 1); // if found erase this index element;
  cout << s << endl;
}