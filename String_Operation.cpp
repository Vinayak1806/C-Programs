#include <iostream>
#include <string>
using namespace std;

int main()
{
  // Creating strings
  string str1 = "\nHello ";
  string str2 = "World \n";

  // Concatenation
  string str3 = str1 + " " + str2;
  cout << "\nConcatenation: " << str3 << endl;

  // Accessing characters
  char ch = str1[2]; // Accessing the second character
  cout << "\nSecond character of str1: " << ch << endl;

  // Substring extraction
  string subStr = str3.substr(6, 5); // Extracts "World"
  cout << "\nSubstring: " << subStr << endl;

  // Length of a string
  cout << "\nLength of str3: " << str3.length() << endl;

  // Comparing strings
  if (str1 == str2)
  {
    cout << "\n str1 and str2 are equal" << endl;
  }
  else
  {
    cout << "\n str1 and str2 are not equal" << endl;
  }

  // Inserting a substring
  str3.insert(5, ", Beautiful ");
  cout << "\nAfter insertion: " << str3 << endl;

  return 0;
}
