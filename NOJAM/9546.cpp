#include <bits/stdc++.h>
using namespace std;

int main() {
  int t; cin >> t;
  while (t--) {
    int k; cin >> k;
    cout << (1 << k) - 1 << '\n';
  }
  return 0;
}