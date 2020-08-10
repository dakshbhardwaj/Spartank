// Given an array of integers a,  returns the boolean value true if the sequence of elements of a coincides with the same sequence in inverse order, false otherwise.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool isNumberPresent(int arr[], int n, int arr2[], int number)
{
  for (int i = 0; i < n; i++)
  {

    if (arr[i] == arr2[n - i - 1])
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
  int arr2[number];
  for (int i = 0; i < n; i++)
  {
    cin >> arr2[i];
  }
  isNumberPresent(arr, n, arr2, number) ? cout << "true" : cout << "false";
  return 0;
}