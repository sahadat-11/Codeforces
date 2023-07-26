//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
    int t; cin >> t;
    while(t--) {
      int l, r; cin >> l >> r;
      int mx = INT_MIN, mxval = l;
      for(int i = l; i <= min(r, l+100); i++) {
         string check = to_string(i);
         int mxe = *max_element(check.begin(), check.end());
         int mne = *min_element(check.begin(), check.end());
         if(mx < (mxe - mne)) {
            mx = mxe - mne;
            mxval = i;
         }
       }
      cout << mxval << "\n";
    }
    return 0;
}


// approach 2:

#include <bits/stdc++.h>
using namespace std;

int main(){
   int t;
   cin >> t;
   while(t--){
      int l, r;
      cin >> l >> r;
      int maxl = 0,ans = l;
      for(int i = l;i<=r;i++){
         string num = to_string(i);
         sort(num.begin(),num.end());
         int curr = num[num.length()-1]-num[0];
         
         if(curr>maxl){
            ans = i;
            maxl = curr;
         }
         
         if(maxl==9){
            break;
         }
      }
      cout << ans << endl;
   }
   return 0;
}