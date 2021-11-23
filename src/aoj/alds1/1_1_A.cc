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
  print_array(&A[0], n);

  for (int i = 1; i < n; i++)
  {
    int v = A[i];
    int j = i - 1;
    while (j >= 0 & A[j] > v)
    {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;

    print_array(&A[0], n);
  }
}