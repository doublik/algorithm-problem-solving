#include <bits/stdc++.h>
using namespace std;

int N;
int main() {
  ios::sync_with_stdio(0); cin.tie(0);
  cin >> N;
  int arr[N];
  for(int i=0; i<N; i++) cin >> arr[i];
  sort(arr,arr+N);
  for(int i=0; i<N; i++) cout << arr[i] << '\n';
  return 0;
}