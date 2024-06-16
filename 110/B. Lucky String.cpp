//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  string s = "";
  for(int i = 1; i <= n; i++) {
  	if(i % 4 == 1) s += 'a';
  	else if(i % 4 == 2) s += 'b';
  	else if(i % 4 == 3) s += 'c';
  	else s += 'd';
  }
  cout << s << "\n";
  return 0;
}

// approach 2:

#include<iostream>
using namespace std;
int main(){
    long n;cin>>n;
    for(int i=1;i<=n/4;i++){
        cout<<"abcd";
    }
    string s="abcd";
    for(int i=0;i<n%4;i++){
        cout<<s[i];
    }
    cout<<endl;
    }