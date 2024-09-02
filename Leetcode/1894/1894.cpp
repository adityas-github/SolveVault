#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int chalkReplacer(vector<int> &chalk, int k)
    {
        std::ios_base::sync_with_stdio(false);
        std::cin.tie(nullptr);
        std::cout.tie(nullptr);
        long long int chalkwalk = 0;
        for (int c : chalk)
        {
            chalkwalk += c;
        }
        k = k % chalkwalk;
        for (int i = 0; i < chalk.size(); i++)
        {
            if (chalk[i] > k)
            {
                return i;
            }
            k = k - chalk[i];
        }
        return 0;
    }
};

int main()
{
    Solution s;
    vector<int> chalk = {3, 4, 1, 2};
    int k = 25;
    cout << s.chalkReplacer(chalk, k) << endl;
    return 0;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
