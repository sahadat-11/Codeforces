//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
#define int long long
void solve() {
   int n, r, b; cin >> n >> r >> b;
   int khop = b + 1;
   int each_khop = r / khop;
   int each_khop_extra = each_khop + r % khop;
   //cout << r % khop << endl;
   //cout << each_khop << endl;
   string s;
   for(int i = 0; i < r % khop; i++) {
   	for(int j = 0; j <= each_khop; j++) s.push_back('R');
   	s.push_back('B');
   }
   for(int i = 0; i < b - r % khop; i++) {
   	for(int j = 0; j < each_khop; j++) s.push_back('R');
   	s.push_back('B');
   }
   int cnt = count(s.begin(), s.end(), 'R');
   for(int i = cnt; i < r; i++) s.push_back('R');
   cout << s << "\n";
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t = 1; 
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}


#include<bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,r,b;
		cin>>n>>r>>b;
		while(b>0)
		{
			int temp=r/(b+1);
			while(temp--)
			{
				cout<<"R";
				r--;
			}
			cout<<"B";
			b--;
		}
		while(r--)
			cout<<"R";
		cout<<endl;
	}		
}