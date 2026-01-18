#include <iostream>
#include <vector>
using namespace std;
#define ll long long 

int main()
{
  ll tc;
  cin >> tc;

  while (tc--)
  {
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll max = INT_MIN;
    for (ll i = 0; i < n; i++)
    {
      cin >> a[i];
      if (max <= a[i])
      max = a[i];
    }

    // if we sort array in descending order(bubble sort)
    // then the answer will always be max element * size
    cout << max * n << "\n";
  }

  return 0;
}