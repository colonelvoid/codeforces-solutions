#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];

        int max = *max_element(a.begin(), a.end());
        vector<int> b, c;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != max)
                b.push_back(a[i]);
            else 
                c.push_back(a[i]);
        }

        if (b.size() == 0)
            cout << -1 << '\n';
        else 
        {
            cout << b.size() << " " << c.size() << "\n";  
            for (auto &it : b)
                cout << it << " ";
            cout << "\n";
            for (auto &it : c)
                cout << it << " ";
            cout << "\n";
        }
    }
    return 0;
}