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
  for (int i = 0; i < n; i++)
  {
    int min_j = i;
    for (int j = i; j < n; j++)
    {
      if (A[j] < A[min_j])
      {
        min_j = j;
      }
    }

    if (A[i] != A[min_j])
    {
      cnt++;
      swap(A[i], A[min_j]);
    }
  }

  print_array(&A[0], n);
  cout << cnt << endl;
}