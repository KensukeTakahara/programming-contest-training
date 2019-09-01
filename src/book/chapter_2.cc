#include <cstdio>
#include <queue>
#include <utility>

using namespace std;

int fact(int n) {
  if (n == 0) return 1;
  return n * fact(n - 1);
}

int fib(int n) {
  if (n <= 1) return n;
  return fib(n - 1) + fib(n - 2);
}

#define MAX_N 1000

int memo[MAX_N + 1];

int fib_memo(int n) {
  if (n <= 1) return n;
  if (memo[n] != 0) return memo[n];
  return memo[n] = fib_memo(n - 1) + fib_memo(n - 2);
}

int a[MAX_N];
int n, k;

bool dfs(int i, int sum) {
  // n個決定済み
  if (i == n) return sum == k;
  // a[i]を使用しない
  if (dfs(i + 1, sum)) return true;
  // a[i]を使用する
  if (dfs(i + 1, sum + a[i])) return true;
  // 上記のいずれのケースにも当てはまらずkが作れない
  return false;
}

void solve() {
  if (dfs(0, 0))
    printf("Yes\n");
  else
    printf("No\n");
}

const int INF = 100000000;
typedef pair<int, int> P;

char maze[MAX_N][MAX_N];
int N, M;
int sx, sy;  // スタート座標
int gx, gy;  // ゴール座標

int d[MAX_N][MAX_N];

int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

int bfs() {
  queue<P> que;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M; ++j) {
      d[i][j] = INF;
    }
  }
  que.push(P(sx, sy));
  d[sx][sy] = 0;

  while (que.size()) {
    P p = que.front();
    que.pop();
    if (p.first == gx && p.second == gy) break;

    for (int i = 0; i < 4; ++i) {
      int nx = p.first + dx[i], ny = p.second + dy[i];
      if (0 <= nx && nx < N && 0 <= ny && ny < N) {
        if (maze[nx][ny] != '#' && d[nx][ny] == INF) {
          que.push(P(nx, ny));
          d[nx][ny] = d[p.first][p.second] + 1;
        }
      }
    }
  }
  return d[gx][gy];
}
