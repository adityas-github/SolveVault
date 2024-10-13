#include <bits/stdc++.h>
using namespace std;

// Function to generate all Zig-Zag Numbers up to X using BFS
long long findLargestZigZag(long long X) {
    // Initialize maximum Zig-Zag Number
    long long maxZigZag = 0;

    // Queue for BFS
    queue<long long> q;

    // Enqueue single-digit numbers (1 to 9). 0 is considered but handled separately.
    for(int i = 0; i <= 9; ++i){
        q.push(i);
    }

    while(!q.empty()){
        long long current = q.front();
        q.pop();

        // If current is greater than X, skip
        if(current > X){
            continue;
        }

        // Update maxZigZag if current is valid and greater
        if(current <= X){
            maxZigZag = max(maxZigZag, current);
        }

        // If current is 0, it cannot be extended further in Zig-Zag pattern
        if(current == 0){
            continue;
        }

        // Get the last digit
        int lastDigit = current % 10;

        // Possible next digits are lastDigit +1 and lastDigit -1
        vector<int> nextDigits;
        if(lastDigit + 1 <= 9){
            nextDigits.push_back(lastDigit + 1);
        }
        if(lastDigit - 1 >= 0){
            nextDigits.push_back(lastDigit - 1);
        }

        // Append possible next digits to form new numbers
        for(auto digit : nextDigits){
            long long nextNumber = current * 10 + digit;
            if(nextNumber <= X){
                q.push(nextNumber);
            }
        }
    }

    return maxZigZag;
}

int main(){
    long long X;
    cin >> X;

    // Edge case: if X is 0, the largest Zig-Zag number is 0
    if(X == 0){
        cout << 0;
        return 0;
    }

    long long result = findLargestZigZag(X);
    cout << result;
    return 0;
}
