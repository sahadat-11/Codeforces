//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int a, b, x; cin >> a >> b >> x;
  int t = x / 2;
  int c = a - t;
  int d = b - t;
  if(x % 2 == 0) {
  	if(a > b) {
  		for(int i = 0; i < t; i++) cout << "01";
  	    for(int i = 0; i < d; i++) cout << '1';
        for(int i = 0; i < c; i++) cout << '0';
  	}
  	else {
  		for(int i = 0; i < t; i++) 
  	    cout << "10";
  	    for(int i = 0; i < c; i++) cout << '0';
  	    for(int i = 0; i < d; i++) cout << '1';
  	}
  	
   }
  else {
  	if(a > b) {
  		for(int i = 0; i < t; i++) cout << "01";
  		for(int i = 0; i < c; i++) cout << '0';
  	    for(int i = 0; i < d; i++) cout << '1';   
  	}
  	else {
  		for(int i = 0; i < t; i++) 
  	    cout << "10";
  	    for(int i = 0; i < d; i++) cout << '1';
  	    for(int i = 0; i < c; i++) cout << '0';
  	}
  }
  
  return 0;
}
