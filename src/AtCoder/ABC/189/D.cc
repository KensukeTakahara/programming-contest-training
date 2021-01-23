#include <cmath>
#include <cstdio>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  bool arr[60];
  for (int i = 0; i < n; ++i) {
    char str[4];
    scanf("%s", &str[0]);
    if (str[0] == 'A') {
      arr[i] = true;
    } else {
      arr[i] = false;
    }
  }

  long long patterns = 0;
  long long ors = n;
  for (int i = 0; i < n; ++i) {
    if (arr[i] == false) {
      patterns += (long long)pow(2, ors);
      ors -= 1;
    }
  }

  printf("%lld\n", patterns + 1);

  return 0;
}