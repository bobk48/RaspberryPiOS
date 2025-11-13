#include <iostream>

// Function to find the greatest common divisor (GCD) of two numbers
int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}

// Function to find the least common multiple (LCM) of two numbers
int findLCM(int a, int b) {
    return (a * b) / findGCD(a, b);
}

int main() {
    int num1, den1, num2, den2, num3, den3;

    // Input three fractions
    std::cout << "Enter the first fraction (numerator denominator): ";
    std::cin >> num1 >> den1;
    std::cout << "Enter the second fraction (numerator denominator): ";
    std::cin >> num2 >> den2;
    std::cout << "Enter the third fraction (numerator denominator): ";
    std::cin >> num3 >> den3;

    // Find the LCD of the denominators
    int lcm12 = findLCM(den1, den2);
    int lcd = findLCM(lcm12, den3);

    // Output the LCD
    std::cout << "The LCD of the three fractions is: " << lcd << std::endl;

    return 0;
}
