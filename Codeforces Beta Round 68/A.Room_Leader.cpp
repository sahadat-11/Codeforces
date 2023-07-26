//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    vector<pair<int, string>> v;
    for(int i = 0; i < n; i++) {
        string s;
        int p, n, a, b, c, d, e;
        cin >> s >> p >> n >> a >> b >> c >> d >> e;
        int sum = p * 100 - n * 50 + a + b + c + d + e;
        v.push_back({sum, s});
    }
    sort(v.rbegin(), v.rend());
    cout << v[0].second;
    return 0;
} 

// approach 2: 

#include <bits/stdc++.h>
#define ll long long
#define ll long double
using namespace std;

void number_1() {
    int n, mx=INT_MIN;
    cin >> n;
    map <int, string> s;
    for (int i=0; i<n; i++) {
        string l; cin >> l;
        int sum = 0;
        int p, m, a, b, c, d, e;
        cin >> p >> m >> a >> b >> c >> d >> e;
        sum += p*100;
        sum -= m*50;
        sum += a + b + c + d + e;
        mx = max(mx, sum);
        s[sum] = l;
    }
    cout << s[mx];
}

int main() {
    number_1();
    return 0;
}

// approach 3:

#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;string ans="";int res=0;
    cin>>n;
    for(int i=0;i<n;i++){
        string handlei;int plusi, minusi, ai, bi, ci, di, ei;
        cin>>handlei>>plusi>>minusi>>ai>>bi>>ci>>di>>ei;
        int temp=plusi*100-minusi*50+ai+bi+ci+di+ei;
        if(i==0) {ans=handlei; res=temp;}
        else if(temp>res) {ans=handlei; res=temp;}
    }
    cout<<ans;
}