//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   string s; cin >> s;
   int n = s.size();
   for(int i = 1; i < n; i++) {
   	if(s[i] == s[i - 1]) {
   	  	if(i + 1 < n and s[i + 1] == char(s[i] + 1)) {
   	  	  if(char(s[i] + 2) >= 'z') {
   	  	  	s[i] = char(s[i] - 1);
   	  	  }
   	  	  else {
   	  	  	s[i] = char(s[i] + 2);
   	  	  }
   	  	}
   	  	else if(i + 1 < n and s[i + 1] == char(s[i] - 1)) {
   	  	  if(char(s[i] - 2) <= 'a') {
   	  	  	s[i] = char(s[i] + 1);
   	  	  }
   	  	  else {
   	  	  	s[i] = char(s[i] - 2);
   	  	  }
   	  	}
   	  	else {
   	  		if(char(s[i] + 1) <= 'z') {
   	  		  s[i] = char(s[i] + 1);
   	  		}
            else s[i] = char(s[i] - 1);
   	  	}
   	  }
   	}
   cout << s << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  //cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include<bits/stdc++.h>
using namespace std;
int main(){
   string s;
   cin >> s;
   for(int i=1;i<s.size();i++){
      if(s[i-1]==s[i]){
         char c='a';
         while(s[i-1]==c || s[i+1]==c) c++;
         s[i]=c;
      }
   }
   cout << s;
   return 0;
}