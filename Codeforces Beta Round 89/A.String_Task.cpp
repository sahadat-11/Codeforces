//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
bool isvowel(char c) {
    if(c == 'a' or c == 'e' or c == 'i' or c == 'o' or c == 'u' or c == 'y')
    return true;
    return false;
}
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s; cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] <= 'Z') s[i] += 32;
    }
    for(int i = 0; i < s.size(); i++) {
        if(!isvowel(s[i])) {
            cout << '.' << s[i];
        }
    }
	return 0;
} 