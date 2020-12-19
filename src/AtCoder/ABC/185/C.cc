#include <algorithm>
#include <cstdio>

using namespace std;

#define CUT (int)12

__int128 func(__int128 x) {
  if (x <= 1) {
    return 1;
  }

  return x * func(x - 1);
}

int main() {
  int l;
  scanf("%d", &l);
  printf("%lld\n", (func(l - 1) / func(l - (CUT))) / func(CUT - 1));

  return 0;
}