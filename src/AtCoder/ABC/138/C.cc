#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

int main() {
  int n;
  vector<int> vec;
  scanf("%d", &n);
  for (int i = 0; i < n; ++i) {
    int x;
    scanf("%d", &x);
    vec.push_back(x);
  }

  sort(vec.begin(), vec.end());
  double result = (double)vec.front();
  vec.erase(vec.begin());

  for (int i : vec) {
    result = (result + (double)i) / 2.0;
  }
  printf("%lf\n", result);
  return 0;
}
