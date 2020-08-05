/**
 * 
 * 
 * Write a program with function named func1(int[] a)
that, given an array of integers a, returns a new array obtained from a by replacing each negative integer with 0.
For example, the call func1({1,-2, 3, 4, -5}), should return the array {1, 0, 3, 4, 0}.
**/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void nonNegativeArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] < 0)
    {
      arr[i] = 0;
    }
  }
}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  nonNegativeArray(arr, n);

  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << ", " << endl;
  }

  return 0;
}