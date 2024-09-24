/* Distinct Numbers:
    You are given a list of n integers, and your task is to calculate the number of distinct values in the list.
    Constraints:
        1≤n≤2⋅105
        1≤xi≤109

    Solution link: https://cses.fi/paste/e6921b435e4498606a805c/
*/
#include <iostream>
#include <set>
#include <vector>
using namespace std;

int distinctNumbers(vector<int> &x, int n)
{
    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(x[i]);
    }
    return s.size();
}

int main()
{
    int n;
    cin >> n;
    vector<int> x(n);
    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }
    int ans = distinctNumbers(x, n);
    cout << ans;
    return 0;
}