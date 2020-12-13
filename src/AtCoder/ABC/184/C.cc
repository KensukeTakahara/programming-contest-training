#include <cstdio>
#include <cstdlib>

using namespace std;

#define MAX (long)1e10

int main() {
  long r1, r2, c1, c2;
  scanf("%ld %ld", &r1, &c1);
  scanf("%ld %ld", &r2, &c2);

  long dis = abs(r1 - r2) + abs(c1 - c2);

  if (dis == 0) {
    printf("0\n");
    return 0;
  }

  if (dis <= 3) {
    printf("1\n");
    return 0;
  }

  if (r1 + c1 == r2 + c2) {
    printf("1\n");
    return 0;
  }

  if (r1 - c1 == r2 - c2) {
    printf("1\n");
    return 0;
  }

  for (long i = -3; i <= 3; i++) {
    for (long j = -3; j <= 3; j++) {
      if (abs(i) + abs(j) <= 3) {
        if ((r1 + i) + (c1 + j) == r2 + c2) {
          printf("2\n");
          return 0;
        }

        if ((r1 + i) - (c1 + j) == r2 - c2) {
          printf("2\n");
          return 0;
        }
      }
    }
  }

  if (r1 % 2 == r2 % 2 && c1 % 2 == c2 % 2) {
    printf("2\n");
    return 0;
  }

  if (r1 % 2 != r2 % 2 && c1 % 2 != c2 % 2) {
    printf("2\n");
    return 0;
  }

  if (dis <= 6) {
    printf("2\n");
    return 0;
  }

  printf("3\n");
  return 0;
}
