/*
Coding - string is given, so we need to return total no. Permutations possible after eleminating the vowels from the string .

So if string is ABC
then after removing A vowel. Length is 2
So total permutations are 2! = 2
*/

#include <iostream>
#include <string>
using namespace std;

int factorial(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int solve(string a)
{
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
        {
            continue;
        }
        else
        {
            count++;
        }
    }
    if (count == 0)
    {
        return 0;
    }
    else
    {
        return factorial(count);
    }
}
int main()
{
    string a = "ABC";
    int ans = solve(a);
    cout << ans << endl;
    return 0;
}