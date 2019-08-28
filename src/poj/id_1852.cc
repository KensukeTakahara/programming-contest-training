#include <cstdio>
#include <algorithm>

using namespace std;

void solve(int L, int n, int* pos) {
  int minT = 0;
  for (int i = 0; i < n; ++i) {
    minT = max(minT, min(L - pos[i], pos[i]));
  }
  int maxT = 0;
  for (int i = 0; i < n; ++i) {
    maxT = max(maxT, max(L - pos[i], pos[i]));
  }
  printf("%d %d\n", minT, maxT);
}

int main() {
  int problems;
  scanf("%d", &problems);
  for (int i = 0; i < problems; ++i) {
    int length, ants;
    scanf("%d %d", &length, &ants);
    int arr[ants];
    for (int j = 0; j < ants; j++) {
      scanf("%d", &arr[j]);
    }
    solve(length, ants, arr);
  }
  return 0;
}
