#include <bits/stdc++.h>
using namespace std;

char solve(string a) {
    map<char, int> m;
    char result = a[0]; // Initialize with the first character
    int maxFreq = 0;

    // Fill the map with frequencies and find the character with max frequency
    for (int i = 0; i < a.length(); i++) {
        m[a[i]]++;

        // If the current character has a higher frequency or if there's a tie and it appears earlier
        if (m[a[i]] > maxFreq || (m[a[i]] == maxFreq && result > a[i])) {
            maxFreq = m[a[i]];
            result = a[i];
        }
    }
    return result;
}

int main() {
    string a = "helloworld";
    char ans = solve(a);
    cout << ans << endl; // Output should be 'a'
    return 0;
}
