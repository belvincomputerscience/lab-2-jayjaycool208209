#include <iostream>

int main() {
    // Assignment 1 - Your Name

    // Declare variables
    double grade1, grade2, grade3, grade4;
    double average;

    // Prompt user for input
    std::cout << “Enter four test grades: “;
    std::cin >> grade1 >> grade2 >> grade3 >> grade4;

    // Compute the average
    average = (grade1 + grade2 + grade3 + grade4) / 4.0;

    // Display the average
    std::cout << “The average grade is: “ << average << std::endl;

    return 0;
}
