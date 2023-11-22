//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>>subsets(vector<int> & v) {
   int n = v.size();
   int sub_cnt = (1 << n);// (2^n)
   vector<vector<int>>total_subsets;
   for(int mask = 0; mask < sub_cnt; mask++) {
      vector<int>subsets;
      for(int i = 0; i < n; i++) {
        if(mask & (1 << i)) {
          subsets.push_back(v[i]);
        }
      }
      total_subsets.push_back(subsets);
   }
   return total_subsets;
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   string s1, s2; cin >> s1 >> s2;
   int sum1 = 0, sum2 = 0;
   for(auto u : s1) {
   	  if(u == '+') sum1++;
   	  else sum1--;
   }
   int cnt = 0;
   for(auto u : s2) {
   	  if(u == '+') sum2++;
   	  else if(u == '-') sum2--;
   	  else cnt++;
   }
   //cout << sum1 << " " << sum2 << " " << cnt << endl;
   int sub_cnt = (1 << cnt);// (2^n)
   vector<vector<int>>total_subsets;
   for(int mask = 0; mask < sub_cnt; mask++) {
      vector<int>subsets;
      for(int i = 0; i < cnt; i++) {
        if(mask & (1 << i)) {
          subsets.push_back(1);
        }
        else subsets.push_back(-1);
      }
      total_subsets.push_back(subsets);
   }
   int ans = 0;
   for(auto subset : total_subsets) {
   	  int sum3 = 0;
      for(auto ele : subset) {
        //cout << ele << " ";
        sum3 += ele;
      } 
      if(sum2 + sum3 == sum1) ans++;
   }
   //cout << ans << "\n";
   double res = ((1.0 * ans) / sub_cnt);
   cout << fixed << setprecision(12) << res << "\n";
   return 0;
}
