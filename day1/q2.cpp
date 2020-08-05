#include <iostream>
using namespace std;

int countBinary(int n)
{
  int count = 0;
  while (n != 0)
  {
    int last_digit = n % 10;
    n = n / 10;
    if (last_digit == 1)
    {
      count++;
    }
  }
  return count;
}

int main()
{
  int n;
  cin >> n;
  cout << countBinary(n);
}