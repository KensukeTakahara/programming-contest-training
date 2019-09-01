#include <algorithm>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  long maxLen = 0;
  long currentLen = 0;

  long prevVal;
  scanf("%ld", &prevVal);
  for (int i = 1; i < n; ++i) {
    long currentVal;
    scanf("%ld", &currentVal);
    if (prevVal < currentVal) {
      maxLen = max(currentLen, maxLen);
      currentLen = 0;
    } else {
      currentLen++;
    }
    prevVal = currentVal;
  }
  maxLen = max(currentLen, maxLen);
  printf("%ld\n", maxLen);
  return 0;
}