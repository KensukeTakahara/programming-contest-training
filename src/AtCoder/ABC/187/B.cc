#include <cstdio>

#define N 1000

int main() {
  int n;
  scanf("%d", &n);

  float p[N][2];
  for (int i = 0; i < n; ++i) {
    scanf("%f %f", &p[i][0], &p[i][1]);
  }

  int cnt = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = i + 1; j < n; ++j) {
      float d = (p[j][1] - p[i][1]) / (p[j][0] - p[i][0]);
      if (d >= -1.0 && d <= 1.0) {
        cnt++;
      }
    }
  }

  printf("%d\n", cnt);
  return 0;
}