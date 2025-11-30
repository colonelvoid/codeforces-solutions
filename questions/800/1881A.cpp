#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tc;
    cin >> tc;
    while (tc--) 
    {
        int n, m;
        cin >> n >> m;
        string x, s;
        cin >> x >> s;
        
        // Check initial x
        if (x.find(s) != string::npos) 
        {
            cout << 0 << '\n';
            continue;
        }
        
        int ops = 1;
        // Max 5 doublings: n → 2n → 4n → 8n → 16n → 32n > 25*m
        while (ops <= 5) 
        {
            x += x;
            if (x.find(s) != string::npos) 
            {
                cout << ops << '\n';
                break;
            }
            ops++;
        }
        if (ops > 5) cout << -1 << '\n';
    }
}
