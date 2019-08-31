#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int city[n + 1];
  long sum = 0;
  int saver[n];

  for (int i = 0; i < n + 1; ++i) {
    int a;
    scanf("%d", &a);
    city[i] = a;
    sum += a;
  }
  for (int i = 0; i < n; ++i) {
    int a;
    scanf("%d", &a);
    saver[i] = a;
  }

  for (int i = 0; i < n; ++i) {
    int current_saver = saver[i];
    int current_city = city[i];
    int next_city = city[i + 1];

    if (current_saver >= current_city) {
      city[i] = 0;
      city[i + 1] = max(next_city - (current_saver - current_city), 0);
    } else {
      city[i] = current_city - current_saver;
    }
  }

  long cnt = 0;
  for (int i = 0; i < n + 1; ++i) {
    cnt += city[i];
  }
  printf("%ld\n", sum - cnt);

  return 0;
}
