/*
You are given an array A of length N. Your task is to find and return an integer value representing the difference between the sum of elements at odd index and XOR of elements at even index.

Input
The first line of input contains an integer N, representing the length of the array A.
The second line of input contains N space-separated integers, representing the elements of the array A.

Output
Print the integer value representing the difference between the sum of elements at odd index and XOR of elements at even index.

Sample Input:
6
10 5 6 3 7 2

Sample Output:
-1
*/
#include <iostream>
using namespace std;
int solve(int arr[], int n)
{
    int sumOdd = 0;
    int xorEven = 0;
    for (int i = 0; i < n; i++)
    {
        if (i % 2 == 0)
        {
            xorEven = xorEven ^ arr[i];
        }
        else
        {
            sumOdd += arr[i];
        }
    }
    return sumOdd - xorEven;
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int ans = solve(arr, n);
    cout << ans << endl;
}