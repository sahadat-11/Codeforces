//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int t; cin >> t;
  while(t--) {
    int n; cin >> n;
    int a = n % 10; n /= 10; 
    int b = n % 10; n /= 10;
    int c = n % 10; n /= 10;
    int d = n % 10; n /= 10;
    int e = n % 10; n /= 10;
    int f = n % 10; n /= 10;
    set<int> st;
    st.insert(a * 1);
    st.insert(b * 10);
    st.insert(c * 100);
    st.insert(d * 1000);
    st.insert(e * 10000);
    st.erase(st.begin());
    cout << st.size() << "\n";
    for(auto u : st) cout << u << " ";
    cout << "\n";

    //cout << a << " " << b << " " << c << " " << d << " " << e;
   
  }
 
  return 0;
}

// approach 2:

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int T;
  cin>>T;
  while(T--)
  {
    int n,t=1;
    vector<int>box;
    cin>>n;
    while(n)
    {
      if(n%10)box.push_back(n%10*t);
      n/=10; t*=10;
    }
    cout<<box.size()<<'\n';
    for(auto x:box)cout<<x<<" ";
    cout<<'\n';
  }
  return 0;
}
