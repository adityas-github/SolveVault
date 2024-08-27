#include <iostream>
using namespace std;

int solve(int n)
{
    long long int temp = n;
    long long int ans = 0;
    while (temp)
    {
        if (temp % 10 == 0)
        {
            ans = ans * 10 + 5;
        }
        else
        {
            ans = ans * 10 + temp % 10;
        }
        temp = temp / 10;
    }
    temp = ans;
    ans = 0;
    while (temp)
    {
        ans = ans * 10 + temp % 10;
        temp = temp / 10;
    }
    return ans;
}
int main()
{
    long long int n;
    cin >> n;
    long long int ans = solve(n);
    cout << ans << endl;
}