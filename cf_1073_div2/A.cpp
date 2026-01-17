#include <bits/stdc++.h>
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
        {
            cin >> a[i];
            a[i]--; // make 0-based
        }

        // pos[x] = original index of value x
        vector<int> pos(n);
        for (int i = 0; i < n; i++) 
        {
          pos[a[i]] = i;
        }

        bool ok = true;
        for (int i = 1; i < n; i++) 
        {
          if ((pos[i] % 2) == (pos[i - 1] % 2)) 
          {
            ok = false;
            break;
          }
        }

        cout << (ok ? "YES\n" : "NO\n");
    }
}