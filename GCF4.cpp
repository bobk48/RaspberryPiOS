#include <iostream>

// Function to calculate the GCF using the Euclidean algorithm
int findGCF(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, num3, num4;

    // Prompt the user to enter the four numbers
    std::cout << "Enter the first number: ";
    std::cin >> num1;
    std::cout << "Enter the second number: ";
    std::cin >> num2;
    std::cout << "Enter the third number: ";
    std::cin >> num3;
    std::cout << "Enter the fourth number: ";
    std::cin >> num4;

    // Calculate GCF step by step
    int gcf1 = findGCF(num1, num2);
    int gcf2 = findGCF(gcf1, num3);
    int gcf3 = findGCF(gcf2, num4);

    // Display the GCF
    std::cout << "The Greatest Common Factor of " << num1 << ", " << num2 << ", " << num3 << ", and " << num4 << " is " << gcf3 << std::endl;

    return 0;
}
