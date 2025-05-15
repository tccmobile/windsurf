/**
 * @file branches.cpp
 * @brief Demonstrates conditional statements in C++
 * 
 * This program shows how to use if-else statements, switch-case statements,
 * and logical operators to create branching logic in C++.
 */

#include <iostream>
#include <string>

int main() {
    // Example 1: Simple if statement
    int score = 85;
    if (score >= 60) {
        std::cout << "You passed the exam!\n";
    }

    // Example 2: if-else statement
    int age = 21;
    if (age >= 18) {
        std::cout << "You are an adult.\n";
    } else {
        std::cout << "You are a minor.\n";
    }

    // Example 3: if-else if-else chain
    int grade = 88;
    if (grade >= 90) {
        std::cout << "Grade: A\n";
    } else if (grade >= 80) {
        std::cout << "Grade: B\n";
    } else if (grade >= 70) {
        std::cout << "Grade: C\n";
    } else if (grade >= 60) {
        std::cout << "Grade: D\n";
    } else {
        std::cout << "Grade: F\n";
    }

    // Example 4: switch-case statement
    std::string day = "Monday";
    std::cout << "\nToday is: " << day << "\n";
    switch (day) {
        case "Monday":
            std::cout << "First day of the work week.\n";
            break;
        case "Friday":
            std::cout << "Last day of the work week.\n";
            break;
        default:
            std::cout << "Middle of the week.\n";
    }

    // Example 5: Logical operators
    bool isRaining = true;
    bool hasUmbrella = false;
    
    if (isRaining && !hasUmbrella) {
        std::cout << "\nYou should stay inside.\n";
    }

    return 0;
}