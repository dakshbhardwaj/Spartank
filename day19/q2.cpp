// Write a program with function named func2(int[] a, int n)
// that, given an array of integers a and an integer n, verifies whether n appears in a.
// For example, the call func2({1,2,3}, 2) should return true.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isNumberPresent(int arr[], int n, int number)
{
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == number)
    {
      return true;
    }
  }
  return false;
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
  int number;
  cin >> number;
  isNumberPresent(arr, n, number) ? cout << "true" : cout << "false";
  return 0;
}