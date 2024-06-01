#include <iostream>
using namespace std;

int main()
{
   char button;
   cout << "type a charecter";
   cin >> button;

   switch (button)
   {
   case 'a':
      cout << "CSK";
      break;

   case 'b':
      cout << "MI";
      break;

   case 'c':
      cout << "RCB";
      break;

   case 'd':
      cout << "KKR";
      break;

   case 'e':
      cout << "SRH";
      break;

   case 'f':
      cout << "GT";
      break;

   default:
      cout << "all students";
   }

   return 0;
}