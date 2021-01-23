#include <cstdio>

#define MAX 100000

int main() {
  int n;
  scanf("%d", &n);
  int x[MAX], y[MAX];
  for (int i = 0; i < n; ++i) {
    scanf("%d", &x[i]);
  }
  for (int i = 0; i < n; ++i) {
    scanf("%d", &y[i]);
  }

  int sum = 0;
  for (int i = 0; i < n; ++i) {
    sum += x[i] * y[i];
  }

  if (sum == 0) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}