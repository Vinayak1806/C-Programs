#include <iostream>
using namespace std;

int main()
{
  int number;
  cout << "Enter the number : ";
  cin >> number;

  // By using Continue keyword
  cout << "Odd numbers are :" << endl;
  for (int i = 0; i < number; i++)
  {
    if ((i % 2) == 0)
    {
      continue;
    }
    cout << i << endl;
  }
  // By using break keyword
  cout << "Odd numbers are :" << endl;
  for (int i = 0; i < number; i++)
  {
    if ((i % 2) != 0)
    {
      break;
    }
    cout << i << endl;
  }
  return 0;
}