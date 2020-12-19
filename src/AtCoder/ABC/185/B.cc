#include <algorithm>
#include <cstdio>

using namespace std;

#define MAX (int)1000

int main() {
  int n, m, t;
  int schedule[MAX][2];

  scanf("%d %d %d", &n, &m, &t);
  for (int i = 0; i < m; i++) {
    scanf("%d %d", &schedule[i][0], &schedule[i][1]);
  }

  int current = n;

  int prev_end = 0;

  for (int i = 0; i < m; i++) {
    int start = schedule[i][0];
    int end = schedule[i][1];

    current -= start - prev_end;
    if (current <= 0) {
      printf("No\n");
      return 0;
    }

    current = min(n, (current + end - start));
    prev_end = end;
  }

  current -= t - prev_end;
  if (current <= 0) {
    printf("No\n");
    return 0;
  }

  printf("Yes\n");
  return 0;
}