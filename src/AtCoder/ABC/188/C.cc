#include <cmath>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);
  long long len = pow(2.0, n);
  long long half_len = pow(2.0, n - 1);

  long long max_1 = 0;
  long long max_1_index = 0;
  long long max_2 = 0;
  long long max_2_index = half_len;

  for (long long i = 0; i < len; i++) {
    long long num = 0;
    scanf("%lld", &num);

    if (i < half_len) {
      if (max_1 < num) {
        max_1 = num;
        max_1_index = i;
      }
    } else {
      if (max_2 < num) {
        max_2 = num;
        max_2_index = i;
      }
    }
  }

  if (max_1 > max_2) {
    printf("%lld\n", max_2_index + 1);
  } else {
    printf("%lld\n", max_1_index + 1);
  }

  return 0;
}
