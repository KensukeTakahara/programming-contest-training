#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
  string n;
  cin >> n;

  int sum = 0;
  for (int i = 0; i < n.length(); i++)
  {
    if (n[i] == '1')
    {
      sum += (int)pow(2, n.length() - i - 1);
    }
  }
  cout << sum << endl;

  return 0;
}