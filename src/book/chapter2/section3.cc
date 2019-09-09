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

// 最長共通部分列問題
#define MAX_N_3 1000
#define MAX_M_3 1000
int n3, m3;
char s3[MAX_N_3], t3[MAX_M_3];
int dp3[MAX_N_3 + 1][MAX_M_3 + 1];
void solve3() {
  for (int i = 0; i < n3; ++i) {
    for (int j = 0; j < m3; ++j) {
      if (s3[i] == t3[j]) {
        dp3[i + 1][j + 1] = dp3[i][j] + 1;
      } else {
        dp3[i + 1][j + 1] = max(dp3[i][j + 1], dp3[i + 1][j]);
      }
    }
  }
  printf("%d\n", dp3[n3][m3]);
}

// 個数制限なしナップサック問題
void solve4() {
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= W; ++j) {
      if (j < w[i]) {
        dp[i + 1][j] = dp[i][j];
      } else {
        dp[i + 1][j] = max(dp[i][j], dp[i + 1][j - w[i]] + v[i]);
      }
    }
  }
  printf("%d\n", dp[n][W]);
}

// 重さのオーダーが大きいナップサック問題
#define INF 1000000
#define MAX_N_5 1000
#define MAX_V_5 1000  // 仮 本当は配列v(価値)の中で最高の値
int dp5[MAX_N_5 + 1][MAX_N_5 * MAX_V_5 + 1];
void solve5() {
  fill(dp5[0], dp5[0] + MAX_N_5 * MAX_V_5 + 1, INF);
  dp5[0][0] = 0;
  for (int i = 0; i < n; ++i) {
    for (int j = 0; j <= MAX_N_5 * MAX_V_5; ++j) {
      if (j < v[i]) {
        dp5[i + 1][j] = dp5[i][j];
      } else {
        dp[i + 1][j] = min(dp5[i][j], dp5[i][j - v[i]] + w[i]);
      }
    }
  }
  int res = 0;
  for (int i = 0; i <= MAX_N_5 * MAX_V_5 + 1; ++i) {
    if (dp5[n][i] <= W) {
      res = i;
    }
  }
  printf("%d\n", res);
}
