#include <cstdio>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);

  int A[N];
  int max = 0;
  int max_2nd = 0;

  for (int i = 0; i < N; ++i) {
    scanf("%d", &A[i]);
    if (max <= A[i]) {
      max_2nd = max;
      max = A[i];
    } else if (max_2nd <= A[i]) {
      max_2nd = A[i];
    }
  }

  for (int i = 0; i < N; ++i) {
    if (A[i] == max) {
      printf("%d\n", max_2nd);
    } else {
      printf("%d\n", max);
    }
  }

  return 0;
}
