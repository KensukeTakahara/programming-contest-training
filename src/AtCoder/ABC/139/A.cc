#include <cstdio>

#define LEN 3

int main() {
  char s[LEN + 1], t[LEN + 1];
  scanf("%s", s);
  scanf("%s", t);

  int cnt = 0;
  for (int i = 0; i < LEN; ++i) {
    if (s[i] == t[i]) {
      cnt++;
    }
  }
  printf("%d\n", cnt);
  return 0;
}
