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
    string p1[n], p2[n], p3[n];
    for(int i = 0; i < n; i++) cin >> p1[i];
    for(int i = 0; i < n; i++) cin >> p2[i];
    for(int i = 0; i < n; i++) cin >> p3[i];

    map<string, int> mp;

    for(int i = 0; i < n; i++) mp[p1[i]]++;
    for(int i = 0; i < n; i++) mp[p2[i]]++;
    for(int i = 0; i < n; i++) mp[p3[i]]++;

    int sum1 = 0, sum2 = 0, sum3 = 0;
    for(int i = 0; i < n; i++) {
      if(mp[p1[i]] == 1) sum1 += 3;
      else if(mp[p1[i]] == 2) sum1 += 1;
    }
    for(int i = 0; i < n; i++) {
      if(mp[p2[i]] == 1) sum2 += 3;
      else if(mp[p2[i]] == 2) sum2 += 1;
    }
    for(int i = 0; i < n; i++) {
      if(mp[p3[i]] == 1) sum3 += 3;
      else if(mp[p3[i]] == 2) sum3 += 1;
    }

    cout << sum1 << " " << sum2 << " " << sum3 << "\n";
  }
  return 0;
}

// approach 2;

#include<bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    map<string , int> mp;
    string a[4][1010];
    int n;
    cin>>n;
    for(int i = 1 ; i <= 3 ; i++ )
    {
      for(int j = 1 ; j <= n ; j++ )
      {
        cin>>a[i][j];
        mp[a[i][j]]++;
      }
    }
    for(int i = 1 ; i <= 3 ; i++)
    {
      int cnt = 0;
      for(int j = 1 ; j <= n ; j++)
      {
        if(mp[a[i][j] ] == 1)cnt+=3;
        else if(mp[a[i][j]] == 2)cnt+=1;
      }
      cout<<cnt<<" ";
    }
  }
}

// approach 3;
//In The Name of ALLAH

#include<bits/stdc++.h>
using namespace std;
int main()
{
   
int t;cin>>t;
while(t--){
  int n;cin>>n;
  string s[3][n];
  unordered_map<string,int>m;
  for(int i=0;i<3;i++){
    for(int j=0;j<n;j++){
      cin>>s[i][j];
      m[s[i][j]]++;
  }
}

  for(int i=0;i<3;i++){
    int c=0;
    for(int j=0;j<n;j++){
      if(m[s[i][j]]==1) c+=3;
      else if(m[s[i][j]]==2) c++;
    }
    cout<<c<<" ";
  }
  cout<<endl;
  }

   return 0;
}
                                            