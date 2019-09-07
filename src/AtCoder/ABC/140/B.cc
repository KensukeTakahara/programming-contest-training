#include <cstdio>

#define MAX 30

int N;
int A[MAX], B[MAX], C[MAX];

int main() {
  scanf("%d", &N);
  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
  }
  for (int i = 0; i < N; ++i) {
    scanf("%d", &B[i]);
  }
  for (int i = 0; i < N - 1; ++i) {
    scanf("%d", &C[i]);
  }

  int ans = B[A[0] - 1];
  for (int i = 1; i < N; ++i) {
    ans += B[A[i] - 1];
    if (A[i] == A[i - 1] + 1) {
      ans += C[A[i - 1] - 1];
    }
  }
  printf("%d\n", ans);
  return 0;
}
