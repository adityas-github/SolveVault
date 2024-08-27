/*
find the sum of element that are at even position after reversing the array
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int solve(vector<int> &a, int n)
{
    int sum = 0;
    reverse(a.begin(), a.end());
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            sum += a[i];
        }
    }
    cout << sum << endl;
    return sum;
}
int main()
{
    vector<int> a = {10, 20, 30, 40, 50, 60};
    int n = a.size();
    int sum = solve(a, n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << sum << endl;
}