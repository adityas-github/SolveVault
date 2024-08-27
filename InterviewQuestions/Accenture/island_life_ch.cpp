#include <iostream>
using namespace std;

int minimumBoxes(int N, int E, int D) {
    // Check if it's impossible to survive even with maximum boxes
    if (E * D > N * (D - D / 7)) {
        return -1;
    }

    int totalSweetsRequired = E * D;
    int boxesRequired = 0;

    for (int i = 1; i <= D; i++) {
        // If it's a Sunday, you can't buy a box
        if (i % 7 != 0) {
            boxesRequired++;
            totalSweetsRequired -= N;
        }

        if (totalSweetsRequired <= 0) {
            return boxesRequired;
        }
    }

    return -1;  // Shouldn't reach here
}

int main() {
    int N, E, D;
    cin >> N >> E >> D;

    int result = minimumBoxes(N, E, D);
    cout << result << endl;

    return 0;
}
