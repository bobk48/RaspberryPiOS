#include <iostream>
#include <string>

int main() {
    std::string inputString;
    char targetLetter;

    // Prompt the user for input string
    std::cout << "Enter a string: ";
    std::cin >> inputString;

    // Prompt the user for the target letter
    std::cout << "Enter the letter you want to count: ";
    std::cin >> targetLetter;

    int count = 0;

    // Loop through the characters in the input string
    for (char ch : inputString) {
        // Check if the current character matches the target letter
        if (ch == targetLetter) {
            count++;
        }
    }

    // Display the count
    std::cout << "The letter '" << targetLetter << "' appears " << count << " times in the string." << std::endl;

    return 0;
}
