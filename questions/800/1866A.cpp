#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    int min = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        int temp = abs(nums[i]);
        if (min > temp) min = temp;
    }
    cout << min << "\n";

    return 0;
}