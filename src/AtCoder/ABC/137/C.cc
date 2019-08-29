#include <cstdio>
#include <string>
#include <string.h>
#include <unordered_map>

using namespace std;

long sum(long n) {
  if (n == 0) return 0;
  return n + sum(n - 1);
}

int main() {
  int n;
  scanf("%d", &n);
  unsigned char arr[n][26];
  memset(arr, 0, n * 26);

  unordered_map<string, long> hoge;

  for (int i = 0; i < n; ++i) {
    char box[12];
    scanf("%s", &box[0]);
    char tmp[26];
    memset(tmp, 0, 26);
    for (int j = 0; j < 10; ++j) {
      tmp[(unsigned char)box[j] - 0x61]++;
    }
    string str = "";
    for (int j = 0; j < 26; ++j) {
      str += (char)(tmp[j] + 0x61) + to_string((int)tmp[j]);
    }
    if (hoge.find(str) == hoge.end()) {
      hoge.insert(make_pair(str, 0));
    } else {
      hoge[str]++;
    }
  }

  long cnt = 0;

  auto itr = hoge.begin();
  for (itr; itr != hoge.end(); itr++) {
    cnt += sum(itr->second);
  }

  printf("%ld\n", cnt);

  return 0;
}
