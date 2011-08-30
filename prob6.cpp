#include <iostream>

using namespace std;

int main()
{
  int count = 0;
  unsigned long sumofsquare = 0;
  unsigned long squareofsum = 0;
  unsigned long difference = 0;

  while (count <= 100)
  {
    sumofsquare = sumofsquare + (count * count);
    squareofsum	= squareofsum + count;
    count++;
  }
  squareofsum = squareofsum * squareofsum;
  difference = squareofsum - sumofsquare;

  cout << difference << endl;

  return 0;
}
