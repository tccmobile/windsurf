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

int main() {
    // Example 1: Basic for loop
    std::cout << "\nFor Loop Example:\n";
    std::cout << "Counting from 1 to 5:\n";
    for (int i = 1; i <= 5; i++) {
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    // Example 2: While loop
    std::cout << "While Loop Example:\n";
    std::cout << "Counting down from 3:\n";
    int count = 3;
    while (count > 0) {
        std::cout << count << " ";
        count--;
    }
    std::cout << "\n\n";

    // Example 3: Do-while loop
    std::cout << "Do-While Loop Example:\n";
    std::cout << "Always runs at least once:\n";
    int num = 0;
    do {
        std::cout << num << " ";
        num++;
    } while (num < 3);
    std::cout << "\n\n";

    // Example 4: Nested loops
    std::cout << "Nested Loops Example:\n";
    std::cout << "Multiplication Table:\n";
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            std::cout << i << " x " << j << " = " << (i * j) << "\n";
        }
        std::cout << "\n";
    }

    // Example 5: Loop control statements
    std::cout << "\nLoop Control Example:\n";
    std::cout << "Skipping even numbers:\n";
    for (int i = 1; i <= 5; i++) {
        if (i % 2 == 0) {
            continue;  // Skip even numbers
        }
        if (i == 5) {
            break;     // Stop at 5
        }
        std::cout << i << " ";
    }
    std::cout << "\n\n";

    // Example 6: Range-based for loop
    std::cout << "Range-based For Loop Example:\n";
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << "Numbers in vector:\n";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << "\n";

    return 0;
}