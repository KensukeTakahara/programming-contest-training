#include <algorithm>
#include <cstdio>
#include <utility>

using namespace std;

const int V[6] = {1, 5, 10, 50, 100, 500};

// 入力
int C[6];
int A;

void solve1() {
  int ans = 0;
  for (int i = 5; i >= 0; --i) {
    int t = min(A / V[i], C[i]);
    A -= t * V[i];
    ans += t;
  }
  printf("%d\n", ans);
}

const int MAX_N = 100000;

int N, S[MAX_N], T[MAX_N];

pair<int, int> itv[MAX_N];

void solve2() {
  for (int i = 0; i < N; ++i) {
    itv[i].first = T[i];
    itv[i].second = S[i];
  }
  sort(itv, itv + N);

  int ans, t = 0;
  for (int i = 0; i < N; ++i) {
    if (t < itv[i].second) {
      ans++;
      t = itv[i].first;
    }
  }
  printf("%d\n", ans);
}