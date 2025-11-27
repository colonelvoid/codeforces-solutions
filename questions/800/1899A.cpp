#include <iostream>
#include <string>
using namespace std;

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int num;
        cin >> num;

        if (num % 3 == 0)
            cout << "Second\n";
        else 
            cout << "First\n";
    }

    return 0;
}