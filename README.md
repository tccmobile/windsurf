# C++ Basics Examples

This repository contains educational C++ programs that demonstrate fundamental concepts typically taught in a college-level introductory C++ course. Each program is well-documented and designed to help students understand key programming concepts.

## Programs Included

1. `variables.cpp`
   - Demonstrates different variable types in C++
   - Shows how to declare and use integers, floating-point numbers, characters, booleans, and strings
   - Includes examples of type-specific operations

2. `branches.cpp`
   - Illustrates conditional statements in C++
   - Shows how to use if-else statements
   - Demonstrates switch-case statements
   - Includes examples of logical operators

3. `loops.cpp`
   - Demonstrates different types of loops in C++
   - Shows how to use for loops, while loops, and do-while loops
   - Includes examples of nested loops
   - Demonstrates loop control statements (break and continue)
   - Shows range-based for loops

## Building and Running the Programs

### Using the Batch File
The repository includes a batch file (`build_and_run.bat`) that automates the build and execution process:

1. Open a command prompt
2. Navigate to the repository directory
3. Run the batch file:
   ```
   build_and_run.bat
   ```

### Manual Build Instructions
If you prefer to build manually:

1. Create a build directory:
   ```
   mkdir build
   cd build
   ```

2. Configure with CMake:
   ```
   cmake ..
   ```

3. Build the programs:
   ```
   cmake --build .
   ```

4. Run the programs:
   ```
   ./variables
   ./branches
   ./loops
   ```

## Requirements

- CMake 3.10 or higher
- C++17 compatible compiler
- Windows (for batch file) or any OS (for manual build)

## License

This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.

## Contributing

Feel free to submit issues and enhancement requests! If you'd like to contribute, please fork the repository and submit a pull request.