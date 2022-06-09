#include <iostream>
#define ll long long
using namespace std;

int main()
{
  int a;
  cin >> a;
  while (a--)
  {
    int n, b;
    cin >> n >> b;
    if (n % 4 == 1 || n % 4 == 2 || n % 4 == 3)
    {
      if (b == 1)
      {
        cout << "Ambiguous \n";
      }
      else
        cout << "On \n"
             << endl;
    }
    else
    {
      if (b == 0)
      {
        cout << "Off \n";
      }
      else
        cout << "On \n";
    }
  }
  return 0;
}