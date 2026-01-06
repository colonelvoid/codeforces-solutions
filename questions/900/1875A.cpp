#include <iostream>
#include <vector>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    long long a, b, n;
    cin >> a >> b >> n;

    vector<long long> x(n);
    for (int i = 0; i < n ; i++)
      cin >> x[i];

    for (int i = 0; i < n; i++)
      b += min(x[i], a - 1);

    cout << b << "\n";
  }

  return 0;
}