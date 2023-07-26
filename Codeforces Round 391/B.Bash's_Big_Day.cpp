//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int fre[N];
int main() {
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        fre[a[i]]++;
    }
    int mx = 1;
    // for(int g = 2; g <= N; g++) {  // for worst case we get tle for (n ^ 2);
    //     int cnt = 0;
    //     for(int i = 0; i < n; i++) {
    //         if(a[i] % g == 0) cnt ++;
    //     }
    //     mx = max(cnt, mx);
    // }
    // cout << mx << "\n";

    for(int g = 2; g <= N; g++) {
      int cnt = 0;
      for(int j = g; j <= N; j += g) {
        cnt += fre[j];
      }
      mx = max(cnt, mx);
      //cout << mx << endl; // NlogN;
    }
    cout << mx << "\n";
    // for(int i = 0; i < 10; i++) {
    //     cout << fre[i] << " ";
    // }
    //cout << fre[2] << " " << fre[4] << " " << fre[6];
	return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int fre[N];
int spf[N];
int main() {
    for(int i = 1; i < N; i++) spf[i] = i;
    for(int i = 2; i < N; i++) {
        if(spf[i] == i) {
           for(int j = i; j < N; j += i) spf[j] = min(spf[j], i);
        }
    }
    int n; cin >> n; int a[n];
    int mx = 1;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        while(x > 1) {
            int k = spf[x];
            fre[k]++;
            mx = max(fre[k], mx);
            while(x % k == 0) {
                x /= k;
            }
        }
    }
    cout << mx << "\n";
    return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 7;
int fre[N];
int spf[N];
int main() {
    for(int i = 1; i < N; i++) spf[i] = i;
    for(int i = 2; i < N; i++) {
        if(spf[i] == i) {
           for(int j = i; j < N; j += i) spf[j] = min(spf[j], i);
        }
    }
    fre[1] = 1;
    int n; cin >> n; int a[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        int x = a[i];
        while(x > 1) {
            int k = spf[x];
            fre[k]++;
            while(x % k == 0) {
                x /= k;
            }
        }
    }
   cout << *max_element(fre, fre + N);
    return 0;
}