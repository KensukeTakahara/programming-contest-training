#include <cstdio>

using namespace std;

int main() {
  char str[4];
  scanf("%s", &str[0]);
  if (str[0] == str[1] && str[1] == str[2] && str[2] == str[0]) {
    printf("Won\n");
  } else {
    printf("Lost\n");
  }
  return 0;
}