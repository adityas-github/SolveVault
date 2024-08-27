#include <iostream>
using namespace std;

int minimumPurchases(int N, int E, int D)
{
    // Total number of sweets required to survive D days
    int totalSweetsNeeded = E * D;

    // Total number of sweets you can buy in D days (excluding Sundays)
    int daysAvailableToBuy = (D / 7) * 6 + (D % 7); // Every 7th day is Sunday

    // If it's impossible to get enough sweets in the available buying days
    if (daysAvailableToBuy * N < totalSweetsNeeded)
    {
        return -1;
    }

    // Calculate the minimum number of days required to buy the sweets
    int minDays = (totalSweetsNeeded + N - 1) / N; // Ceiling of totalSweetsNeeded / N

    return minDays;
}

int main()
{
    // Input specifications
    int N, E, D;
    cin >> N >> E >> D;

    // Calculate and output the result
    int result = minimumPurchases(N, E, D);
    cout << result << endl;

    return 0;
}
