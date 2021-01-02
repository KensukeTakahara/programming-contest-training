#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int a, b;
  scanf("%d %d", &a, &b);
  int a1 = (int)(a / 100);
  int a2 = (int)((a - (a1)*100) / 10);
  int a3 = (int)(a - (a1)*100 - (a2)*10);
  int b1 = (int)(b / 100);
  int b2 = (int)((b - (b1)*100) / 10);
  int b3 = (int)(b - (b1)*100 - (b2)*10);
  printf("%d\n", max(a1 + a2 + a3, b1 + b2 + b3));
  return 0;
}