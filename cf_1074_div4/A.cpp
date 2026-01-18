#include <iostream>
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

        for (int i = 1; i <= n; i++)
        {
            cout << i << " ";
        }
        cout << "\n";
    }

    return 0;
}