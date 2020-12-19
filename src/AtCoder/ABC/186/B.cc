#include <algorithm>
#include <cstdio>

#define MAX 100

using namespace std;

int main() {
  int h, w;
  int arr[MAX][MAX];

  scanf("%d %d", &h, &w);
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      scanf("%d", &arr[i][j]);
    }
  }

  int min_val = arr[0][0];
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      min_val = min(min_val, arr[i][j]);
    }
  }

  int sum = 0;
  for (int i = 0; i < h; i++) {
    for (int j = 0; j < w; j++) {
      sum += arr[i][j] - min_val;
    }
  }

  printf("%d\n", sum);
  return 0;
}