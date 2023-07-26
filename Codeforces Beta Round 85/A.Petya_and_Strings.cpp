//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string a, b; cin >> a >> b;
  for(int i = 0; i < a. size(); i++) a[i] = tolower(a[i]);
  for(int i = 0; i < b. size(); i++) b[i] = tolower(b[i]);
  //cout << a << " " << b;
  if(a > b) cout << 1;
  else if(a < b) cout << -1;
  else cout << 0;
  return 0;
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
  char a[101],b[101];
  gets(a);
  gets(b);
  cout<<strcmp(strlwr(a),strlwr(b));
  return 0;
}
