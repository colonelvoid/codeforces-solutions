#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll tc;
    cin >> tc;
    
    while (tc--)
    {
        string s;
        cin >> s;
        
        long long countY = 0;
        
        for (char &c : s)
        {
            if (c == 'Y')
                countY++;
                
            if (countY > 1)
                break;
        }
        
        if (countY > 1)
            cout << "NO" << "\n";
        else
            cout << "YES" << "\n";
    }
    
    return 0;
}