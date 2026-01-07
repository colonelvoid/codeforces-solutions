#include <iostream>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    string a, b;
    cin >> a >> b;

    char temp = a[0];
    a[0] = b[0];
    b[0] = temp;

    cout << a << " " << b << "\n";
  }

  return 0;
}