#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // the problem just boils down to this inequality
        int n, a, b;
        cin >> n >> a >> b;

        if (a + b + 2 <= n || (a == b && a == n))
            cout << "Yes\n";
        else
            cout << "No\n";
    }
    return 0;
}