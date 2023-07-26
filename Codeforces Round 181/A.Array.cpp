//In The Name of ALLAH
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n; int a[n];
  int pos = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    if(a[i] > 0) pos = a[i];
  }
  sort(a, a + n);
  cout << 1 << " " << a[0] << "\n";
  if(pos) {
    cout << 1 << " " << pos << "\n";
  }
  else cout << 2 << " " << a[1] << " " << a[2] << "\n";
  if(pos) {
    cout << n - 2 << " ";
    for(int i = 1; i < n; i++) {
      if(a[i] != pos) cout << a[i] << " ";
    }
      cout << "\n";
  }
  else {
    cout << n - 3 << " ";
    for(int i = 3; i < n; i++) cout << a[i] << " ";
    cout << "\n";
  }
  return 0; 
}

// approah 2:
#include <bits/stdc++.h>
using namespace std;
int main() {
  int n; cin >> n; int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  sort(array, array + n);
  cout << "1" << " " << array[0] << endl;
  if (array[n - 1] > 0) {
    cout << "1" << " " << array[n - 1] << endl;
    cout << n - 2 << " ";
    for (int i = 1; i < n - 1; i++) cout << array[i] << " ";
  } else {
    cout << "2 " << array[1] << " " << array[2] << endl;
    cout << n - 3 << " ";
    for (int i = 3; i < n; i++) {
      cout << array[i] << " ";
    }
  }

}