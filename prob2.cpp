#include <iostream>

using namespace std;

int main()
{
  int value1 = 1;
  int value2 = 2;
  int sum = 0;

  while (value1 <=  4000000 && value2 <=  4000000)
  {
    if (value1 % 2 == 0)
    {
      sum = sum + value1;
    }
    if (value2 % 2 == 0)
    {
      sum = sum + value1;
    }
    if (value1 < value2)
    {
      value1 = value2 + value1;
    }
    else if (value1 > value2)
    {
      value2 = value2 + value1;
    }
  }
  cout << sum << endl;
  return 0;
}

