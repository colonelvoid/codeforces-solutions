#include <iostream>
#include <unordered_set>
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

    unordered_set<ll> s; // stores unique elements for O(1) lookup
    for (ll i = 0; i < n; i++)
    {
      ll x;
      cin >> x;
      s.insert(x); 
    }

    ll best = 0; // longest consecutive sequence length

    for (auto x : s) 
    {
      // x is start of a sequence if x-1 does not exist
      if (!s.count(x - 1)) 
      {
        ll length = 1;      // current sequence length
        ll current = x + 1; // next expected value

        // extend sequence while consecutive values exist
        while (s.count(current)) 
        {
          length++;
          current++;
        }

        best = max(best, length); // update maximum length
      }
    }

    cout << best << "\n";
  }

  return 0;
}