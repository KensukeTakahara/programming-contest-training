#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int x, y;
  scanf("%d %d", &x, &y);
  int mi = min(x, y);
  int ma = max(x, y);
  if (mi + 3 > ma) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}