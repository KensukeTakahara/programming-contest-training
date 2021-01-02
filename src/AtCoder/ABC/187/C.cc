#include <cstdio>
#include <set>
#include <string>

#define N 1000

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  set<string> set;
  for (int i = 0; i < n; ++i) {
    char s[11];
    scanf("%s", &s[0]);

    string key = "";
    string raw = "";
    if (s[0] == '!') {
      key = string(&s[1]);
      raw = key;
    } else {
      key = "!" + string(&s[0]);
      raw = string(&s[0]);
    }

    if (set.find(key) != set.end()) {
      printf("%s\n", raw.c_str());
      return 0;
    }

    string target = string(s);
    set.insert(target);
  }

  printf("satisfiable\n");
  return 0;
}