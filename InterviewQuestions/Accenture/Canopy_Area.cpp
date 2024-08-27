/*
Canopy Area

You are developing a feature for an environmental awareness app that helps users to know how much area their tree's shadow covers. You have the distance D from a tree's trunk to the edge of the shadow. Your task is to calculate and return an integer value representing the shadow area of the canopy.

Note: Round off the result to the nearest integer.

Input Specification:

input1: An integer value D, representing the distance from the tree trunk to the edge of shadow.
Output Specification:

Return an integer value representing the shadow area of the canopy.
Example 1:

input1: 5
Output: 78
*/

#include <iostream>
using namespace std;
int solve(int n)
{
    return int(3.14 * n * n);
}
int main()
{
    int n;
    cin >> n;
    int ans = solve(n);
    cout << ans << endl;
    return 0;
}