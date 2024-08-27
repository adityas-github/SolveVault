/*
You are given two string a  and b. Your task is to find and return a string saying 'Even' if the value representing the absolute difeerences between number of whitespaces in both
string is divisible by 2 else return 'Odd' if the value representing the absolute difeerences between number of whitespaces in both string is not divisible by 2. Also return the
absolute difference between number of whitespaces in both string.
*/

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string solve(string a, string b)
{
    int count1 = 0, count2 = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == ' ')
        {
            count1++;
        }
    }
    for (int i = 0; i < b.length(); i++)
    {
        if (b[i] == ' ')
        {
            count2++;
        }
    }
    if ((abs(count1 - count2)) % 2 == 0)
    {
        return "Even" + to_string(count1 - count2);
    }
    else
    {
        return "Odd" + to_string(count1 - count2);
    }
}
int main()
{
    // string a = "He ll o W or ls";
    // string b = "Hello World";
    string a = "Mer cer M  e    t    t    l";
    string b = "Mer cer met tl";
    string ans = solve(a, b);
    cout << ans << endl;
}