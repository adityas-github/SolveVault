/*

Alex is exploring a series and she came across a special series, in which
・f(N）= f(N-1)*f(N-1) + f(N-2)*f(N-2) for N > 1
• where f(0) = 1 f(1) = 1.
Your task is to help Alex find and return an integer value, representing the Nt number in this special series
Note: Return the output modulo 47.
*/

#include <iostream>
#include <vector>
using namespace std;
int solve(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    // return (solve(n - 1) * solve(n - 1) + solve(n - 2) * solve(n - 2)) % 47;
    vector<long long int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 1;
    for (int i = 2; i < n; i++)
    {
        dp[i] = (dp[i - 1] * dp[i - 1] + dp[i - 2] * dp[i - 2]);
    }
    return dp[n-1]%47;
}
int main()
{
    int n;
    cin >> n;
    int ans = solve(n);
    cout<<ans<<endl;
}