/**
 * @file variables.cpp
 * @brief Demonstrates basic variable types and operations in C++
 * 
 * This program shows how to declare and use different types of variables in C++:
 * - Integer types (int, long, short)
 * - Floating point types (float, double)
 * - Character types (char)
 * - Boolean type (bool)
 * - String type (std::string)
 */

#include <iostream>
#include <string>

int main() {
    // Integer types
    int age = 25;              // Regular integer
    long long population = 7800000000; // Large integer
    short smallNumber = 123;   // Small integer

    // Floating point types
    float pi = 3.14159f;       // Single precision
    double precisePi = 3.14159265358979323846; // Double precision

    // Character type
    char grade = 'A';

    // Boolean type
    bool isStudent = true;

    // String type
    std::string name = "John Doe";

    // Output all variables
    std::cout << "Integer Examples:\n";
    std::cout << "Age: " << age << "\n";
    std::cout << "World Population: " << population << "\n";
    std::cout << "Small Number: " << smallNumber << "\n\n";

    std::cout << "Floating Point Examples:\n";
    std::cout << "Pi (float): " << pi << "\n";
    std::cout << "Pi (double): " << precisePi << "\n\n";

    std::cout << "Character Example:\n";
    std::cout << "Grade: " << grade << "\n\n";

    std::cout << "Boolean Example:\n";
    std::cout << "Is Student: " << (isStudent ? "Yes" : "No") << "\n\n";

    std::cout << "String Example:\n";
    std::cout << "Name: " << name << "\n";

    return 0;
}