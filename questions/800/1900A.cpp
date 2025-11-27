#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int cells;
        string water;
        cin >> cells >> water;

        int count = 0;
        bool hasLongSegment = false;

        int i = 0;
        while (i < cells)
        {
            if (water[i] == '#')
            {
                i++;
                continue;
            }

            int len = 0;
            while (i < cells && water[i] == '.')
            {
                len++;
                i++;
            }

            if (len >= 3)
            {
                hasLongSegment = true;
            }

            count += len;
        }

        if (hasLongSegment)
        {
            cout << 2 << "\n";
        }
        else
        {
            cout << count << "\n";
        }
    }


    return 0;
}