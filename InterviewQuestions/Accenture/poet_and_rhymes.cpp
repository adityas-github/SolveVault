#include <iostream>
#include <vector>
#include <string>

// Function to find the length of the common suffix between two strings
int commonSuffixLength(const std::string& S, const std::string& word) {
    int lenS = S.size();
    int lenW = word.size();
    int minLen = std::min(lenS, lenW);
    
    int i = 0;
    // Compare from the end of both strings
    while (i < minLen && S[lenS - 1 - i] == word[lenW - 1 - i]) {
        i++;
    }
    return i;
}

// Function to find the word that rhymes best with S
std::string findBestRhyme(const std::string& S, const std::vector<std::string>& D) {
    std::string bestWord = "No Word";
    int maxSuffixLength = 0;
    
    for (const std::string& word : D) {
        // Ignore if the word is the same as S
        if (word == S) continue;

        int suffixLength = commonSuffixLength(S, word);
        
        // Update if a longer suffix is found
        if (suffixLength > maxSuffixLength) {
            maxSuffixLength = suffixLength;
            bestWord = word;
        }
    }
    
    return bestWord;
}

int main() {
    // Sample input
    std::string S = "cave";
    std::vector<std::string> D = {"typical", "logical", "critical", "political"};
    
    // Get the best rhyming word
    std::string result = findBestRhyme(S, D);
    
    // Output the result
    std::cout << result << std::endl;
    
    return 0;
}
