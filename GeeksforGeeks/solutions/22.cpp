// // You are given an array arr of integers, where n is the length of the array. Your task is to find the maximum sum of two distinct numbers from the array such that for a given bit position x, the x-th bit of one number is set (i.e., equals 1), and the x-th bit of the other number is unset (i.e., equals 0).
// // If no such pair of distinct numbers exists, where one has the x-th bit set and the other has the x-th bit unset, return - 1.
// // class Solution {
//   public:
//     long long maxSum(int n, int x, vector<int> &arr) {
//         // code here
//     }
// };

//start code
class Solution {
  public:
    long long maxSum(int n, int x, vector<int> &arr) {
        long long int maxsum = -1;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if ((arr[i] & (1 << x)) && !(arr[j] & (1 << x)))
                {
                    maxsum = max(maxsum, (long long)arr[i] + arr[j]);
                }
                else if (!(arr[i] & (1 << x)) && (arr[j] & (1 << x)))
                {
                    maxsum = max(maxsum, (long long)arr[i] + arr[j]);
                }
            }
        }
        return maxsum;
    }
};