#include <bits/stdc++.h>
using namespace std;

int main() {
  int a[3];
  cin >> a[0] >> a[1] >> a[2];
  sort(a, a + 3);
  if (a[1] - a[0] == a[2] - a[1]) cout << 2 * a[2] - a[1];
  else if (a[1] - a[0] > a[2] - a[1]) cout << a[0] + a[2] - a[1];
  else cout << 2 * a[1] - a[0];
  return 0;
}