#include <algorithm>
#include <cstdio>

using namespace std;

#define MAX_N 2000

int N, R;
int X[MAX_N];

void solve() {
  sort(X, X + N);

  int i = 0, ans = 0;

  while (i < N) {
    int s = X[i++];
    while (i < N && X[i] <= s + R) i++;

    int p = X[i - 1];
    while (i < N && X[i] <= p + R) i++;

    ans++;
  }
  printf("%d\n", ans);
}

int main() {
  while (true) {
    scanf("%d %d", &R, &N);
    if (N == -1 && R == -1) {
      break;
    }
    for (int i = 0; i < N; ++i) {
      scanf("%d", &X[i]);
    }
    solve();
  }
  return 0;
}
