// This program is for given number is prime or not by simple code

#include <iostream>
using namespace std;

int main()
{
  int num, i;
  cout << "Enter the number:";
  cin >> num;

  for (i = 2; i < num; i++)
    if (num % i == 0)
    {
      cout << "number is not prime" << endl;
      break;
    }
  if (num == i)
  {
    cout << "number is prime" << endl;
  }

  cout << "\n******************************************************************\n\n";
  return 0;
}

// This program is for given number is prime or not by using function in

// #include <iostream>
// using namespace std;

// void primeno(int n)
// {
//     for (int i = 2; i <= n; i++)
//     {
//         if (n % i == 0)
//         {
//             cout << "number is not prime";
//         }
//         if(i==n)
//         {
//             cout << "number is prime";
//         }
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;

//     primeno(n);

//     return 0;
// }