#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  long max_val;
  scanf("%ld", &max_val);

  for (int i = 1; i < n; ++i) {
    long current;
    scanf("%ld", &current);
    if (current - max_val < -1) {
      printf("No\n");
      return 0;
    }
    max_val = max(max_val, current);
  }
  printf("Yes\n");
  return 0;
}
