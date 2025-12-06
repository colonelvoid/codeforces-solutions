#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int x, k;
        cin >> x >> k;

        // if x is not divisible by k answer is x
        if (x % k != 0)
            cout << 1 << '\n' << x << '\n';
        // if x is divisible then the answer will x - 1, 1
        // since x - 1 and 1 both wont be divisible by k
        else 
            cout << 2 << '\n' << x - 1 << ' ' << 1 << '\n';
    }

    return 0;
}