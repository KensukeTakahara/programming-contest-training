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
    // もう品物は残っていない
    res = 0;
  } else if (j < w[i]) {
    // この品物は入らない
    res = rec(i + 1, j);
  } else {
    // 入れない場合と入れる場合を両方試す
    res = max(rec(i + 1, j), rec(i + 1, j - w[i]) + v[i]);
  }
  return dp[i][j] = res;
}

void solve1() {
  memset(dp, -1, sizeof(dp));
  printf("%d\n", rec(0, W));
}

// recの定義からdpを直接計算
void solve2() {
  for (int i = n; i >= 0; i--) {
    for (int j = 0; j < W; j++) {
      if (j < w[i]) {
        dp[i][j] = dp[i + 1][j];
      } else {
        dp[i][j] = max(dp[i + 1][j], dp[i + 1][j - w[i]] + v[i]);
      }
    }
  }
  printf("%d\n", dp[0][W]);
}
