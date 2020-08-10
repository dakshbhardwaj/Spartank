// given an array of integers a, inverts the positions of its elements.
// For example, the call invert(a), where a is a reference to the array {1, 2, 3, 4}, should modify the array in such a way that a refers to {4, 3, 2, 1}.

// Write a program with function named func2(int[] a, int n)
// that, given an array of integers a and an integer n, verifies whether n appears in a.
// For example, the call func2({1,2,3}, 2) should return true.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(int arr[], int n)
{
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

    isNumberPresent(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    return 0;
}