#include <iostream>

#define MAX 100

using namespace std;

void print_array(int *array, int len)
{
  for (int j = 0; j < len; j++)
  {
    cout << array[j];
    if (j != len - 1)
    {
      cout << " ";
    }
  }
  cout << endl;
}

int main()
{
  int n;
  int A[MAX];
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> A[i];
  }

  int cnt = 0;
  bool flag = true;
  while (flag)
  {
    flag = false;
    for (int j = n - 1; j >= 1; j--)
    {
      if (A[j] < A[j - 1])
      {
        swap(A[j - 1], A[j]);
        flag = true;
        cnt++;
      }
    }
  }

  print_array(&A[0], n);
  cout << cnt << endl;
}