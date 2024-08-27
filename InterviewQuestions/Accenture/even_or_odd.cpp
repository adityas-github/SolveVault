#include <iostream>
#include <vector>
#include <string>
using namespace std;
string solve(vector<int> v, int n)
{
    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (v[i] % 2 == 0)
        {
            ans += "Even";
        }
        else
        {
            ans += "Odd";
        }
    }
    return ans;
}

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6};
    string ans = solve(v, v.size());
    cout << ans << endl;
    return 0;
}