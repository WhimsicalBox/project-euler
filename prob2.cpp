#include <iostream>

using namespace std;

int main()
{
  int value1 = 1;
  int value2 = 1;
  int temp = 0;
  int sum = 0;

  while (value2 <= 4000000)
  {
    if (value2 % 2 == 0)
    {
      sum = sum + value2;
    }
    temp = value1;
    value1 = value2;
    value2 = value2 + temp;
  }
  cout << sum << endl;
  return 0;
}

