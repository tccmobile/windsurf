/**
 * @file variables.cpp
 * @brief Demonstrates basic variable types and operations in C++
 * 
 * This program shows how to declare and use different types of variables in C++:
 * - Integer types (int, long, short)
 * - Floating point types (float, double)
 * - Character types (char)
 * - Boolean type (bool)
 * - String type (string)
 */

#include <iostream>
#include <string>

using namespace std;

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
    string name = "John Doe";

    // Output all variables
    cout << "Integer Examples:\n";
    cout << "Age: " << age << "\n";
    cout << "World Population: " << population << "\n";
    cout << "Small Number: " << smallNumber << "\n\n";

    cout << "Floating Point Examples:\n";
    cout << "Pi (float): " << pi << "\n";
    cout << "Pi (double): " << precisePi << "\n\n";

    cout << "Character Example:\n";
    cout << "Grade: " << grade << "\n\n";

    cout << "Boolean Example:\n";
    cout << "Is Student: " << (isStudent ? "Yes" : "No") << "\n\n";

    cout << "String Example:\n";
    cout << "Name: " << name << "\n";

    return 0;
}