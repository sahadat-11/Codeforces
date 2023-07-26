//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, x;
    cin >> n >> x;
    int mins = 0;
    int timer = 1;
    for (int i = 0; i < n; i++){
        int start, end;
        cin >> start >> end;
        mins += ((start - timer) % x) + (end - start + 1);
        timer = end + 1;
    }
    cout << mins << "\n";
    return 0;
} 
