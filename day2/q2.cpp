/****
 * Given an array arr of N integers. Find the contiguous sub-array with maximum sum.
 */
#include <iostream>
using namespace std;
void contigousSubArraySum(int arr[], int n)
{
  int currentSum = 0;
  int maxSum = 0;
  for (int i = 0; i < n; i++)
  {
    currentSum += arr[i];
    if (currentSum < 0)
    {
      currentSum = 0;
    }
    maxSum = max(currentSum, maxSum);
  }
  cout << "max sum " << maxSum << endl;
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
  contigousSubArraySum(arr, n);
}
