#include <cstdio>

using namespace std;

#define A 2019

int main(void) {
  long long int L, R;
  long long int min = A, min_2nd = A - 1;
  scanf("%lld %lld", &L, &R);
  for (long long int i = L; i <= R; ++i) {
    long long int mod = i % A;
    if (mod == 0) {
      printf("0\n");
      return 0;
    }
    if (mod < min) {
      min_2nd = min;
      min = mod;
    } else if (mod < min_2nd) {
      min_2nd = mod;
    }
  }

  if (min == 0 || min_2nd == 0) {
    printf("0\n");
    return 0;
  }
  printf("%lld\n", (min * min_2nd) % A);

  return 0;
}