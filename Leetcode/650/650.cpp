// There is only one character 'A' on the screen of a notepad. You can perform one of two operations on this notepad for each step:

// Copy All: You can copy all the characters present on the screen (a partial copy is not allowed).
// Paste: You can paste the characters which are copied last time.
// Given an integer n, return the minimum number of operations to get the character 'A' exactly n times on the screen.

#include <iostream>
#include <vector>
using namespace std;
class Solution
{
public:
    int minSteps(int n)
    {
        if (n == 1)
            return 0;

        int steps = 0;
        int factor = 2;

        while (n > 1)
        {
            while (n % factor == 0)
            {
                steps += factor;
                n /= factor;
            }
            factor++;
        }

        return steps;
    }
};
int main(int argc, char const *argv[])
{
    Solution s;
    cout << s.minSteps(3) << endl;
    cout << s.minSteps(1) << endl;
    cout << s.minSteps(9) << endl;
    return 0;
}
