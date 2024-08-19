#include <iostream>
#include <vector>
#include <set>
#include <sstream>
using namespace std;
class Solution
{
public:
    int kthSmallest(vector<int> &arr, int k)
    {
        set<int> s(arr.begin(), arr.end());
        auto it = s.begin();
        for (int i = 0; i < k - 1; i++)
        {
            it++;
        }
        int ans = *(it);
        return ans;
    }
};
int main()
{
    int test_case;
    cin >> test_case;
    cin.ignore();
    while (test_case--)
    {

        int k;
        vector<int> arr, brr, crr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number)
        {
            arr.push_back(number);
        }
        getline(cin, input);
        ss.clear();
        ss.str(input);
        while (ss >> number)
        {
            crr.push_back(number);
        }
        k = crr[0];
        int n = arr.size();
        Solution ob;
        cout << "ans:" << ob.kthSmallest(arr, k) << endl;
    }
    return 0;
}