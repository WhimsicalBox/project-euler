#include <iostream>

using namespace std;


int  main()
{

  int count = 0;
  int sum = 0;

  while (count < 1000)
  {
    if (count % 3 == 0 || count % 5 == 0)
    {
      sum = count + sum;
    }
  count++;
  }
  cout << sum << endl;
  return 0;
}
