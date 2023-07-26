//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, t; cin >> n >> t;
    if(n == 1 and t == 10) cout << -1;
    else if(t == 10) {
        for(int i = 1; i < n; i++) cout << 1;
        cout << 0;
    }
    else {
        for(int i = 1; i <= n; i++) cout << t;
    }
    return 0;
} 

// approach 2:

#include<iostream>
using namespace std;
int main(){
    int n, t; cin >> n >> t;
   if(t==10) {
     if(n==1) cout<<-1;
     else {
        cout<<1; 
        for(int i=0;i<n-1;i++) cout << 0;
    }
  }
    else for(int i=0;i<n;i++) cout << t;
    return 0;
}