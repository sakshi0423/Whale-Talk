#include <iostream>
#include <vector>
#include <string>

int main() {
    // Initialize the input string and vectors for vowels and the result
    std::string words = "turpentine and turtles";
    std::vector<char> vowels = {'a', 'i', 'u', 'e', 'o'};
    std::vector<char> result;

    // Iterate through each character in the input string
    for (int i = 0; i < words.size(); i++) {
        // Check if the character is a vowel
        for (int j = 0; j < vowels.size(); j++) {
            if (words[i] == vowels[j]) {
                // If it's a vowel, add it to the result
                result.push_back(words[i]);
                // If the vowel is 'u' or 'e', add it to the result again
                if (words[i] == 'u' || words[i] == 'e') {
                    result.push_back(words[i]);
                }
            }
        }
    }

    // Print the resulting vector of vowels
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i];
    }
    std::cout << "\n";

    return 0;
}
