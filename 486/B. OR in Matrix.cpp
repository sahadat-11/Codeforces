//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int row, col; cin >> row >> col; int a[row][col], b[row][col];
  for(int i = 0; i < row; i++) {
  	for(int j = 0; j < col; j++) cin >> b[i][j];
  }
  for(int i = 0; i < row; i++) {
  	for(int j = 0; j < col; j++) a[i][j] = 1;
  }
  for(int i = 0; i < row; i++) {
  	for(int j = 0; j < col; j++) {
  		if(b[i][j] == 0) {
  			for(int k = 0; k < row; k++) a[k][j] = 0;
  			for(int k = 0; k < col; k++) a[i][k] = 0;
  		}
  	}
  }
  for(int i = 0; i < row; i++) {
  	for(int j = 0; j < col; j++) {
  		if(b[i][j] == 1) {
  			int sum = 0;
  			for(int k = 0; k < row; k++) sum += a[k][j];
  			for(int k = 0; k < col; k++) sum += a[i][k];
  			if(sum == 0) {
  				cout << "NO\n";
  				return 0;
  			}
  		}
  	}
  }
  cout << "YES\n";
  for(int i = 0; i < row; i++) {
  	for(int j = 0; j < col; j++) {
  		cout << a[i][j] << " ";
  	}
  	cout << "\n";
  }
  
  return 0;
}