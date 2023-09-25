//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<vector<int>> subsets(vector<int>& nums) {
int n = nums.size();
int sub_cnt = (1 << n); // (2^n);
vector<vector<int>> all_subsets;
for(int mask = 0; mask < sub_cnt; mask++) {
vector<int> subset;
for(int i = 0; i < n; i++) {
if(mask & (1 << i)) {
subset.push_back(nums[i]);
}
else {
	subset.push_back(-nums[i]);
}
}
all_subsets.push_back(subset);
}
return all_subsets;
}
int main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
int n; cin >> n;
vector<int> v(n);
for(int i = 0; i < n; i++) {
	 cin >> v[i];
}
auto all_subsets = subsets(v);
bool flag = false;
for(auto subset : all_subsets) {
	 int sum = 0;
	 for(int ele : subset) {
	 	sum += ele;
	 }
	if(sum % 360 == 0) {
		flag = true; break;
	}
}
if(flag) cout << "YES\n";
else cout << "NO\n";
return 0;
}

//In The Name of ALLAH
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int n; 
int a[100];
bool flag;
void dp(int i, int sum) {
	if(i == n + 1) {
		if(sum % 360 == 0) flag = true;
		return;
	}
	dp(i + 1, sum + a[i]);
	dp(i + 1, sum - a[i]);
}
int main() {
   ios_base::sync_with_stdio(0);
   cin.tie(0);
   cin >> n; 
   for(int i = 1; i <= n; i++) cin >> a[i];
   dp(1, 0);
   if(flag) cout << "YES\n";
   else cout << "NO\n";
   return 0;
}
