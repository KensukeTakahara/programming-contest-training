#include <cstdio>

int main() {
  int x;
  char color[10];
  scanf("%d", &x);
  scanf("%s", &color[0]);
  printf("%s\n", x >= 3200 ? color : "red");
  return 0;
}