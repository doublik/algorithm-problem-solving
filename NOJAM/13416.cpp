#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int a, b, c;
    int ans = 0;
    for (int i = 0; i < n; i++) {
      cin >> a >> b >> c;
      ans += max({0, a, b, c});
    }
    cout << ans << '\n';
  }
  return 0;
}