#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
  int n;
  scanf("%d", &n);

  int cnt = 0;
  for (int i = 1; i <= n; i++) {
    stringstream ss10;
    ss10 << dec << i;
    string s10 = ss10.str();
    stringstream ss8;
    ss8 << oct << i;
    string s8 = ss8.str();
    if (s10.find("7") != string::npos) {
      cnt++;
    } else if (s8.find("7") != string::npos) {
      cnt++;
    }
  }

  printf("%d\n", n - cnt);
  return 0;
}