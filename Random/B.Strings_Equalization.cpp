//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
int main() {
	int t; cin >> t;
    while(t--) {
        string a, b; cin >> a >> b;
        bool flag = false;
        int n = a.size();
        for(int i = 0; i < n; i++) {
           for(int j = 0; j < n; j++) {
             if(a[i] == b[j]) {
                flag = true;
                break;
             }
           }
        }
        if(flag) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}

// approach 2:
//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define sahadat() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
int main()
{
     sahadat();
  
    ll t;cin>>t;

    while(t--){
     string s1,s2;cin>>s1>>s2;
     
     ll flag=0;
     for(auto c:s1){
        if(s2.find(c)!=-1){
            flag=1;break;
        }
     }
     if(flag) cout<<"YES\n";
     else cout<<"NO\n";

   }

   return 0;
}
