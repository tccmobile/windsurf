/**
 * @file branches.cpp
 * @brief Demonstrates conditional statements in C++
 * 
 * This program shows how to use if-else statements, switch-case statements,
 * and logical operators to create branching logic in C++.
 */

#include <iostream>
#include <string>

using namespace std;

int main() {
    // Example 1: Simple if statement
    int score = 85;
    if (score >= 60) {
        cout << "You passed the exam!\n";
    }

    // Example 2: if-else statement
    int age = 21;
    if (age >= 18) {
        cout << "You are an adult.\n";
    } else {
        cout << "You are a minor.\n";
    }

    // Example 3: if-else if-else chain
    int grade = 88;
    if (grade >= 90) {
        cout << "Grade: A\n";
    } else if (grade >= 80) {
        cout << "Grade: B\n";
    } else if (grade >= 70) {
        cout << "Grade: C\n";
    } else if (grade >= 60) {
        cout << "Grade: D\n";
    } else {
        cout << "Grade: F\n";
    }

    // Example 4: Day of the week check
    string day = "Monday";
    cout << "\nToday is: " << day << "\n";
    if (day == "Monday") {
        cout << "First day of the work week.\n";
    } else if (day == "Friday") {
        cout << "Last day of the work week.\n";
    } else {
        cout << "Middle of the week.\n";
    }

    // Example 5: Logical operators
    bool isRaining = true;
    bool hasUmbrella = false;
    
    if (isRaining && !hasUmbrella) {
        cout << "\nYou should stay inside.\n";
    }

    return 0;
}