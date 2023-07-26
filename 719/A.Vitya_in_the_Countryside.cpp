//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  for(int i = 0; i < n; i++) cin >> a[i];
  if(n == 1 and a[n - 1] != 15 and a[n - 1] != 0) cout << -1;
  else if(a[n - 1] == 0) cout << "UP";
  else if(a[n - 1] == 15) cout << "DOWN";
  else if(a[n - 1] != 15) {
    if(a[n - 1] > a[n - 2]) cout << "UP";
    else if(a[n - 1] < a[n - 2]) cout << "DOWN";
  }
  return 0;
}

// approach 2:
#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    if (a[n - 1] == 0){
        cout << "UP";
        return 0;
    }
    if (a[n - 1] == 15){
        cout << "DOWN";
        return 0;
    }
    if (n == 1){
        cout << -1;
        return 0;
    }
    if (a[n - 1] > a[n - 2]){
        cout << "UP";
        return 0;
    }
    cout << "DOWN";
    return 0;
}