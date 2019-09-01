#include <algorithm>
#include <cstdio>

using namespace std;

long cnt = 0;

void sum(long a) {
  cnt += a;
  if (a == 0) return;
  sum(a - 1);
}

int main() {
  long n;
  scanf("%ld", &n);
  sum(n - 1);
  printf("%ld\n", cnt);
  return 0;
}
