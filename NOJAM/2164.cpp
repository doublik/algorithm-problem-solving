#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  int n; cin >> n;
  queue<int> q;
  for (int i = 1; i <= n; i++) q.push(i);
  int ans;
  while (!q.empty()) {
    ans = q.front();
    q.pop();
    if (!q.empty()) {
      q.push(q.front());
      q.pop();
    }
  }
  cout << ans;
  return 0;
}