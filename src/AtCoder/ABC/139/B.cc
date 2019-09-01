#include <cstdio>

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  if (b == 1) {
    printf("0\n");
    return 0;
  }
  for (int i = 1; i <= 20; ++i) {
    int sum = (a * i) - i + 1;
    if (sum >= b) {
      printf("%d\n", i);
      return 0;
    }
  }
  return 0;
}
