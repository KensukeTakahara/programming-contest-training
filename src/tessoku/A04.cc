#include <iostream>
#include <cmath>

using namespace std;

#define LEN 10

int main()
{
  int n;
  cin >> n;

  for (int x = 9; x >= 0; x--)
  {
    int wari = (int)pow(2, x);
    cout << (n / wari) % 2;
  }
  cout << endl;

  return 0;
}