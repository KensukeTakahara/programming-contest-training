#include <cstdio>

#define MAX (int)2e5

int main() {
  int n, x;
  char s[MAX];
  scanf("%d %d", &n, &x);
  scanf("%s", &s);

  for (int i = 0; i < n; i++) {
    if (s[i] == 'x' && x > 0) {
      x--;
    } else if (s[i] == 'o') {
      x++;
    }
  }

  printf("%d\n", x);

  return 0;
}
