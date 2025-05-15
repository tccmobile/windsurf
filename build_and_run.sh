#!/bin/bash

# Create build directory if it doesn't exist
mkdir -p build

# Change to build directory
cd build || exit

# Run CMake configuration
echo "Configuring project..."
cmake ..

# Build all programs
echo "Building programs..."
cmake --build .

# Run each program
echo "Running programs..."
echo

# Run each program with proper path handling
echo "Running Variables Example:"
./variables
echo

echo "Running Branches Example:"
./branches
echo

echo "Running Loops Example:"
./loops
echo

echo "All programs completed successfully!"