#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int missingNumber(int n, vector<int> &a)
{
    int ans = -1;
    sort(a.begin(), a.end());
    if (a[0] != 1)
    {
        ans = 1;
    }
    else
    {
        for (int i = 0; i < n - 2; i++)
        {
            if (a[i + 1] - a[i] != 1)
            {
                ans = a[i] + 1;
                break;
            }
        }
    }
    if (ans == -1)
    {
        ans = a[n - 2] + 1;
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> a(n - 1);
    for (int i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    int ans = missingNumber(n, a);
    cout << ans;
    return 0;
}