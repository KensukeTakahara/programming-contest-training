#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  long long arr[10000];
  long long saidai = 0;

  for (int i = 0; i < n; ++i) {
    scanf("%lld", &arr[i]);
  }

  for (int i = 0; i < n; ++i) {
    long long current = arr[i];

    for (int j = i - 1; j >= 0; --j) {
      if (arr[i] > arr[j]) {
        break;
      } else {
        current += arr[i];
      }
    }
    for (int j = i + 1; j < n; ++j) {
      if (arr[i] > arr[j]) {
        break;
      } else {
        current += arr[i];
      }
    }

    saidai = max(current, saidai);
  }

  printf("%lld\n", saidai);
  return 0;
}