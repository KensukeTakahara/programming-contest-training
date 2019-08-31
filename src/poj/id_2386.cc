#include <algorithm>
#include <cstdio>

using namespace std;

int N, M;

void dfs(int i, int j, char** field) {
  field[i][j] = '.';
  for (int dx = i - 1; dx <= i + 1; ++dx) {
    for (int dy = j - 1; dy <= j + 1; ++dy) {
      if (dx >= 0 && dx < N && dy >= 0 && dy < M) {
        if (field[dx][dy] == 'W') {
          dfs(dx, dy, field);
        }
      }
    }
  }
}

int main() {
  scanf("%d %d\n", &N, &M);
  char** field;
  field = new char*[N];
  for (int i = 0; i < N; ++i) {
    field[i] = new char[M + 1];
  }
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M + 1; ++j) {
      char tmp;
      scanf("%c", &tmp);
      if (tmp == '.' || tmp == 'W') {
        field[i][j] = tmp;
      }
    }
  }

  int cnt = 0;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < M + 1; ++j) {
      if (field[i][j] == 'W') {
        dfs(i, j, field);
        cnt++;
      }
    }
  }
  printf("%d\n", cnt);
  return 0;
}
