#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (long long i = 0; i < n; i++)
            cin >> a[i];

        long long operations_count = 0;

        for (long long i = 0; i < n - 1; i++)
        {
            if ((a[i] % 2) == (a[i + 1] % 2))
                operations_count++;
        }
        cout << operations_count << '\n';
    }
    return 0;
}