#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int decimalToBinary(int n)
{
  int ans = 0;
  int power = 1;
  while (n > 0)
  {
    int last_bit = n & 1;
    ans += last_bit * power; //converting to base of 10
    power = power * 10;
    n = n >> 1;
  }
  return ans;
}

int main()
{
  int n;
  cin >> n;
  cout << decimalToBinary(n) << endl;
  return 0;
}