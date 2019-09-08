#include <string.h>
#include <algorithm>
#include <cstdio>

#define MAX_N 100
#define MAX_W 10000

using namespace std;

int n, W;
int w[MAX_N], v[MAX_N];
int dp[MAX_N][MAX_W];

// i番目以降の品物から重さの挿話がj以下になるように選ぶ
int rec(int i, int j) {
  if (dp[i][j] >= 0) {
    return dp[i][j];
  }
  int res;
  if (i == n) {
    res = 0;
  } else if (j < w[i]) {
    res = rec(i + 1, j);
  } else {
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  return dp[i][j] = res;
}

void solve() {
  memset(dp, -1, sizeof(dp));
  printf("%d\n", rec(0, W));
}
