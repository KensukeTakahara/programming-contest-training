#include <algorithm>
#include <cstdio>

using namespace std;

#define MAX 110

int N;
long B[MAX];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N - 1; ++i) {
    scanf("%ld", &B[i]);
  }

  long ans = B[0];
  for (int i = 1; i < N - 1; ++i) {
    ans += min(B[i - 1], B[i]);
  }
  ans += B[N - 2];

  printf("%ld\n", ans);
  return 0;
}
