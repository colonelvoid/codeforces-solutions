#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int tc;
    cin >> tc;

    while (tc--) 
    {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int i = 0; i < n; i++) 
        {
            cin >> a[i];
        }

        // we have to find if k is the most frequent element
        // in a subarray
        // implying the subarray can be of any size
        // so we can choose a subarray with only k

        // So essentially we have to print yes if k exists in array
        // if it doesnt print no

        bool has_k = false;
        for (int i = 0; i < n; i++) 
        {
            if (a[i] == k)
                has_k = true;
        }

        if (has_k) cout << "YES\n";
        else cout << "NO\n";
    }

    return 0;
}