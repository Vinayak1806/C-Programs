#include <iostream>

using namespace std;

int main()
{
  int number, reversedNumber = 0, remainder;

  cout << "Enter an integer: ";
  cin >> number;
  int originalNumber = number;

  // Reverse the number
  while (number != 0)
  {
    remainder = number % 10;                          // Get the last digit
    reversedNumber = reversedNumber * 10 + remainder; // Append the digit
    number /= 10;                                     // Remove the last digit
  }

  // Display the original and reversed number
  cout << "Original number: " << originalNumber << endl;
  cout << "Reversed number: " << reversedNumber << endl;

  return 0;
}
