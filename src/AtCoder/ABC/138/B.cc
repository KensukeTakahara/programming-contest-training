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

  double sum = 0.0;
  for (int i : vec) {
    sum += 1.0 / (double)i;
  }
  printf("%lf\n", 1.0 / sum);
  return 0;
}
