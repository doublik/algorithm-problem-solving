#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n, r, c; cin >> n >> r >> c;
  bool chk = (r % 2) ^ (c % 2);
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++)
      chk == ((i % 2) ^ (j % 2)) ? cout << 'v' : cout << '.';
    cout << '\n';
  }
  return 0;
}