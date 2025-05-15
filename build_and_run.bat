@echo off

:: Create build directory if it doesn't exist
if not exist "build" mkdir build

:: Change to build directory
cd build

:: Run CMake configuration
echo Configuring project...
cmake ..

:: Build all programs
echo Building programs...
cmake --build .

:: Run each program
echo Running programs...
echo.
echo Running Variables Example:
variables.exe
echo.
echo Running Branches Example:
branches.exe
echo.
echo Running Loops Example:
loops.exe
echo.
echo All programs completed successfully!
pause