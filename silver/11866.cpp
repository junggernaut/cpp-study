#include <iostream>
#include <queue>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);

  int n, k;
  cin >> n >> k;
  queue<int> nums;
  for (int i = 0; i < n; ++i) {
    nums.push(i + 1);
  }
  cout << '<';
  while (!nums.empty()) {
    for (int i = 0; i < k - 1; ++i) {
      nums.push(nums.front());
      nums.pop();
    }
    cout << nums.front();
    nums.pop();
    if (!nums.empty()) {
      cout << ", ";
    }
  }
  cout << '>';

  return 0;
}