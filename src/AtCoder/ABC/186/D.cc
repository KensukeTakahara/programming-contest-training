#include <algorithm>
#include <cstdio>

#define MAX (int)(2 * 1e5)

using namespace std;

int main() {
  int n;
  int a[MAX];
  long long b[MAX];

  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  long long tmp = 0;
  sort(&a[0], &a[n]);
  for (int i = n - 1; i >= 0; i--) {
    b[i] = tmp;
    tmp += a[i];
  }

  long long sum = 0;
  for (int i = 0; i < n; i++) {
    sum += b[i] - ((n - (i + 1)) * a[i]);
  }

  printf("%lld\n", sum);
  return 0;
}