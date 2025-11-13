// main.cpp
#include <iostream>

// Declare the functions from the modules
extern void getInput(int &number);
extern void printNumber(int number);

int main() {
    int number;

    // Call the input function from module1
    getInput(number);

    // Call the output function from module2
    printNumber(number);

    return 0;
}
