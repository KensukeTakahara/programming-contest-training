#include <cstdio>

using namespace std;

#define MAX_N 2000

int N;
char S[MAX_N + 1];

void solve() {
  int a = 0, b = N - 1, cnt = 0;
  while (a <= b) {
    bool left = false;
    for (int i = 0; a + i <= b; i++) {
      if (S[a + i] < S[b - i]) {
        left = true;
        break;
      } else if (S[a + i] > S[b - i]) {
        left = false;
        break;
      }
    }
    if (left)
      putchar(S[a++]);
    else
      putchar(S[b--]);

    cnt++;
    if (cnt >= 80) {
      putchar('\n');
      cnt = 0;
    }
  }
}

int main() {
  scanf("%d", &N);
  int cnt = 0;
  while (true) {
    char tmp;
    scanf("%c", &tmp);
    if (tmp != '\n') {
      S[cnt] = tmp;
      cnt++;
      if (cnt >= N) {
        break;
      }
    }
  }
  solve();
  return 0;
}
