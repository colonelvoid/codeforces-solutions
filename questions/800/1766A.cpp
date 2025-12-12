#include <iostream>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        // This question does involve some specific 
        // math formula, it can also be solved by precomputation
        // if you wish to not use such formulas
        string s;
        cin >> s;
        int n = s.size();
        int f = s[0] - '0';
        cout << (n - 1) * 9 + f << '\n';
    }
    return 0;
}