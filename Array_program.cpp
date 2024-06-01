#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter the size of array: ";
  cin >> n;

  int array[n];
  cout << "Enter the element in array: \n";
  for (int i = 0; i < n; i++)
  {
    cin >> array[i];
  }
  cout << "\n\n ";

  for (int i = 0; i < n; i++)
  {
    cout << array[i] << "\n";
  }
  return 0;
}

