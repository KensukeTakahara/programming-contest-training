#include <algorithm>
#include <cstdio>

#define MAX (long long)(1e9)

using namespace std;

int main() {
  int n;
  long long service_cost;
  scanf("%d %lld", &n, &service_cost);

  long long total_cost[MAX];
  for (long long i = 0; i < MAX; ++i) {
    total_cost[i] = 0;
  }

  for (int i = 0; i < n; ++i) {
    long long a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);
    for (long long j = a; j <= b; ++j) {
      total_cost[j - 1] += c;
    }
  }

  long long sum = 0;
  for (long long i = 0; i < MAX; ++i) {
    sum += min(total_cost[i], service_cost);
  }

  printf("%lld\n", sum);

  return 0;
}
