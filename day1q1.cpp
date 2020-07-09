#include <iostream>
using namespace std;

bool check(int n)
{
  if (n == 1)
  {
    return true;
  }
  while (n > 1)
  {
    int rem = n % 2;
    if (rem != 0)
    {
      return false;
    }
    n = n / 2;
  }
  return true;
}

int main()
{
  int n;
  cin >> n;
  check(n) ? cout << "true" : cout << "false" << endl;
}