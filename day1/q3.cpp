#include <iostream>
using namespace std;

bool checkIthBit(int n, int k)
{
  if ((n >> (k - 1)) & 1)
    return true;
  else
    return false;
}

int main()
{
  int n, k;
  cin >> n >> k;
  checkIthBit(n, k) ? cout << "true" : cout << "false";
}