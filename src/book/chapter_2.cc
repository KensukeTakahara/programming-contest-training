#include <cstdio>

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
