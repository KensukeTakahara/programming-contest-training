#include <cstdio>

using namespace std;

int main() {
  long long n, limit;
  scanf("%lld %lld", &n, &limit);
  limit *= 100;

  long long current = 0;

  for (int i = 0; i < n; ++i) {
    long long ml, percent;
    scanf("%lld %lld", &ml, &percent);
    long long alcohol = ml * percent;
    current += alcohol;
    if (current > limit) {
      printf("%d\n", i + 1);
      return 0;
    }
  }

  printf("-1\n");
  return 0;
}