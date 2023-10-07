//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int t; cin >> t;
  while(t--) {
  	char c[3][3];
  	for(int i = 0; i < 3; i++) {
  		for(int j = 0; j < 3; j++) cin >> c[i][j];
  	}
  	int cross = 0, Not = 0, Plus = 0;
  	int cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[i][0] == 'X') cnt1++;
  		if(c[i][0] == 'O') cnt2++;
  		if(c[i][0] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[i][1] == 'X') cnt1++;
  		if(c[i][1] == 'O') cnt2++;
  		if(c[i][1] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[i][2] == 'X') cnt1++;
  		if(c[i][2] == 'O') cnt2++;
  		if(c[i][2] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[0][i] == 'X') cnt1++;
  		if(c[0][i] == 'O') cnt2++;
  		if(c[0][i] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[1][i] == 'X') cnt1++;
  		if(c[1][i] == 'O') cnt2++;
  		if(c[1][i] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		if(c[2][i] == 'X') cnt1++;
  		if(c[2][i] == 'O') cnt2++;
  		if(c[2][i] == '+') cnt3++;
  		cross = max(cross, cnt1);
  		Not = max(Not, cnt2);
  		Plus = max(Plus, cnt3);
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		for(int j = 0; j < 3; j++) {
  			if(i == j) {
  				if(c[i][j] == 'X') cnt1++;
  		        if(c[i][j] == 'O') cnt2++;
  		        if(c[i][j] == '+') cnt3++;
  		        cross = max(cross, cnt1);
  		        Not = max(Not, cnt2);
  		        Plus = max(Plus, cnt3);
  			}
  		}
  	}
  	cnt1 = 0, cnt2 = 0, cnt3 = 0;
  	for(int i = 0; i < 3; i++) {
  		for(int j = 0; j < 3; j++) {
  			if((i == 0 and j == 2) or (i == 1 and j == 1) or (i == 2 and j == 0)) {
  				if(c[i][j] == 'X') cnt1++;
  		        if(c[i][j] == 'O') cnt2++;
  		        if(c[i][j] == '+') cnt3++;
  		        cross = max(cross, cnt1);
  		        Not = max(Not, cnt2);
  		        Plus = max(Plus, cnt3);
  			}
  		}
  	}
  	int mx = max(cross, max(Not, Plus));
  	if((mx == cross and mx == Not) or(mx == Not and mx == Plus) or (mx == Plus and mx == cross)) {
  		cout << "DRAW\n";
  	}
  	else {
  		if(mx == cross) cout << "X\n";
  		else if(mx == Not) cout << "O\n";
  		else cout << "+\n";
  	}
  }
  return 0;
}