#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long ans = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int x;
      cin >> x;
      ans += x;
    }
  }
  cout << ans;
  return 0;
}