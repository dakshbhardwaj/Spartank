/************
 Given a byte, swap the two nibbles in it. For example 100 is be represented as 01100100 in a byte (or 8 bits). The two nibbles are (0110) and (0100). If we swap the two nibbles, we get 01000110 which is 70 in decimal.
 * */

#include <iostream>
using namespace std;
int main()
{
  int n;
  cin >> n;

  int leftNibble = (n & 0x0F) << 4;
  int rightNibble = (n & 0xF0) >> 4;

  int result = leftNibble | rightNibble;

  cout << "result " << result << endl;
}
