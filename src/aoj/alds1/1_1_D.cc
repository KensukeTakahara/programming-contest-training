#include <iostream>
#include <algorithm>
#include <climits>

using namespace std;

int main()
{
  int n;
  long long int arr[200000];
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  long long int max_v = LLONG_MIN;
  long long int min_v = arr[0];
  for (int i = 1; i < n; i++)
  {
    max_v = max(max_v, arr[i] - min_v);
    min_v = min(min_v, arr[i]);
  }

  cout << max_v << endl;
}
