//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n; cin >> n;
    for(int i = 1, j = n * n; i <= j; i++, j--) {
        cout << i << " " << j << " ";
    }
    return 0;
} 

// approach 2:

#include<iostream>
using namespace std;
int main() {
    int n; cin >> n;
    int left = 1, right =n*n;
    while(left<right) {
        printf("%d %d\n", left++, right--);
    } 
 return 0;
}