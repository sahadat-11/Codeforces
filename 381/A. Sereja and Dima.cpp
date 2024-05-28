//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int f = 0;
  int l = 0, r = n - 1, sum1 = 0, sum2 = 0;
  while(l <= r) {
  	if(!f) {
  		if(a[l] > a[r]) {
  			sum1 += a[l]; l++;
  		}
  		else {
  			sum1 += a[r]; r--;
  		}
  	}
  	else {
  		if(a[l] > a[r]) {
  			sum2 += a[l]; l++;
  		}
  		else {
  			sum2 += a[r]; r--;
  		}
  	}
  	f ^= 1;
  }
  cout << sum1 << " " << sum2 << "\n";
  return 0;
}

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  int f = 1;
  int sum1 = 0, sum2 = 0;
  int l = 0, r = n - 1;
  while(l <= r) {
     if(f) {
       if(a[l] > a[r]) {
         sum1 += a[l];
         l++;
       } 
       else {
         sum1 += a[r];
         r--;
       } 
       f = 0;
     }
     else {
       if(a[l] > a[r]) {
         sum2 += a[l];
         l++;
       } 
       else {
         sum2 += a[r];
         r--;
       }
       f = 1; 
     }
  }
  cout << sum1 << " " << sum2 << "\n";
  return 0;
}
