//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int total = a;
    while(a > a % b) {
        total += a / b;
        a = a / b + a % b;
    }
    cout << total << '\n';
    return 0;
} 

// approach 2:

//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a, b; cin >> a >> b;
    int total = a;
    while(a >= b) {
        total += a / b;
        a = a / b + a % b;
    }
    cout << total << '\n';
    return 0;
} 

// approach 3:

﻿#include <iostream>
using namespace std;
int main() {
    int a, b;
    cin >> a >> b;
    cout << (a * b - 1) / (b - 1);
}
