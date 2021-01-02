#include <algorithm>
#include <cstdio>
#include <vector>

using namespace std;

long long increase(long long aoki, long long takahashi) {
  return (2 * aoki) + takahashi;
}

struct data_t {
  long long aoki;
  long long takahashi;
  long sum;

  bool operator<(const struct data_t& right) const {
    return increase(aoki, takahashi) > increase(right.aoki, right.takahashi);
  }
};

int main() {
  int n;
  scanf("%d", &n);

  vector<struct data_t> vec;
  for (int i = 0; i < n; ++i) {
    struct data_t d;
    scanf("%lld %lld", &(d.aoki), &(d.takahashi));
    d.sum = d.aoki + d.takahashi;
    vec.push_back(d);
  }

  sort(vec.begin(), vec.end());

  long long x = 0;
  for (int i = 0; i < n; ++i) {
    x -= vec[i].aoki;
  }

  for (int i = 0; i < n; ++i) {
    x += increase(vec[i].aoki, vec[i].takahashi);
    if (x > 0) {
      printf("%d\n", i + 1);
      return 0;
    }
  }

  return 0;
}