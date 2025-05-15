/**
 * @file loops.cpp
 * @brief Demonstrates different types of loops in C++
 * 
 * This program shows how to use for loops, while loops, do-while loops,
 * and nested loops in C++. It also demonstrates loop control statements
 * like break and continue.
 */

#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Example 1: Basic for loop
    cout << "\nFor Loop Example:\n";
    cout << "Counting from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        cout << i << " ";
    }
    cout << "\n\n";

    // Example 2: While loop
    cout << "While Loop Example:\n";
    cout << "Counting down from 3:\n";
    int count = 3;
    while (count > 0) {
        cout << count << " ";
        count--;
    }
    cout << "\n\n";

    // Example 3: Do-while loop
    cout << "Do-While Loop Example:\n";
    cout << "Always runs at least once:\n";
    int num = 0;
    do {
        cout << num << " ";
        num++;
    } while (num < 3);
    cout << "\n\n";

    // Example 4: Nested loops
    cout << "Nested Loops Example:\n";
    cout << "Multiplication Table:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            cout << i << " x " << j << " = " << (i * j) << "\n";
        }
        cout << "\n";
    }

    // Example 5: Loop control statements
    cout << "\nLoop Control Example:\n";
    cout << "Skipping even numbers:\n";
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        if (i == 5) {
            break;     // Stop at 5
        }
        cout << i << " ";
    }
    cout << "\n\n";

    // Example 6: Range-based for loop
    cout << "Range-based For Loop Example:\n";
    vector<int> numbers = {1, 2, 3, 4, 5};
    cout << "Numbers in vector:\n";
    for (int num : numbers) {
        cout << num << " ";
    }
    cout << "\n";

    return 0;
}