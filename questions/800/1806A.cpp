#include <iostream>
using namespace std;
typedef long long ll;

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll a, b, c, d;
        cin >> a >> b >> c >> d;

        if (d < b) // y cannot decrease
        { 
            cout << -1 << '\n';
            continue;
        }

        ll dy = d - b; // diagonal moves
        if (a + dy < c)  // x too small even after diagonals
        {
            cout << -1 << '\n';
            continue;
        }

        ll moves = dy + (a + dy - c); // total = diagonals + left moves
        cout << moves << '\n';
    }
}