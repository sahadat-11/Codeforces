//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   int t; cin >> t;
   while(t--) {
      int n; cin >> n;
      string s; cin >> s;
      string ans = "";
      for(int i = n - 1; i >= 0; i--) {
         if(s[i] == '0') {
            ans += char(stoi(s.substr(i-2, 2)) + 'a' - 1);
            i -= 2;
         } 
         else ans += char(s[i] - '0' + 'a' - 1);
      }
      reverse(ans.begin(), ans.end());
      cout << ans << "\n";  
   }
    return 0;
}
//approach 2:

#include<bits/stdc++.h>

using namespace std;

int main(){
   int t; cin>>t;
   while(t--){
      int n; cin>>n;
      string s,o;
      cin>>s;
      for(int i=n-1;i>=0;i--){
         if(s[i]!='0'){
            o+=(char)(s[i]-'1'+'a');
         }else{
            int num = int(s[i-2]-'0')*10 +int(s[i-1]-'0');
            o+=(char)(num +96);
            i-=2;
         }
      }
      reverse(o.begin(),o.end());
      cout<<o<<endl;
   }
   
   return 0;
}