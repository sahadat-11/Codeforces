//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  string week[7] = {"monday", "tuesday", "wednesday", "thursday", "friday", "saturday", "sunday"};
  //for(int i = 0; i < 7; i++) cout << week[i] << "\n";
  string a, b; cin >> a >> b;
  int ind1, ind2;
  for(int i = 0; i < 7; i++) {
  	if(week[i] == a) ind1 = i;
  	if(week[i] == b) ind2 = i;
  }
  //cout << ind1 << " " << ind2 << endl;
  int dif = ((ind2 - ind1) + 7) % 7;
  //cout << dif;
  bool flag = false;
  if((dif == 0) or (dif == 2) or (dif == 3)) flag = true;
  if(flag) cout << "YES\n";
  else cout << "NO"; 
  return 0;
}