#include <iostream>
using namespace std;

struct Tender
{
  int cost;
  int tender_no;
  char company_name[100];
};

int main()
{
  struct Tender s1, s2;
  cout << "Enter number of tender 1 " << endl;
  cin >> s1.tender_no;
  cout << "Enter tender cost " << endl;
  cin >> s1.cost;
  cout << "Enter the company name" << endl;
  cin >> s1.company_name;

  cout << "Number of tender " << s1.tender_no << " Tender cost is " << s1.cost << " Company name is " << s1.company_name << endl;

  cout << "****************************************************************************" << endl;

  cout << "Enter number of tender 2 " << endl;
  cin >> s2.tender_no;
  cout << "Enter tender cost " << endl;
  cin >> s2.cost;
  cout << "Enter the company name" << endl;
  cin >> s2.company_name;

  cout << "Number of tender " << s2.tender_no << " Tender cost is " << s2.cost << " Company name is " << s2.company_name << endl;

  return 0;
}