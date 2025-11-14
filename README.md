# Lottery Number Game

A simple C++ console application that simulates a lottery game where users guess numbers and compare them against randomly generated lottery numbers.

## Description

This is a lottery game program created as part of CMPSC 121 coursework. The program allows users to enter 5 numbers (0-9) and compares them against randomly generated lottery numbers to determine matches. If all 5 numbers match, the user wins the grand prize!

## Features

- Interactive console-based lottery game
- User input validation for 5 numbers (0-9)
- Random lottery number generation
- Automatic match checking
- Grand prize notification for perfect matches

## How to Play

1. Run the program
2. When prompted, enter 5 numbers between 0 and 9 (separated by spaces)
3. The program will generate 5 random lottery numbers
4. The program displays:
   - The randomly generated lottery numbers
   - Your guessed numbers
   - The number of matches
   - Congratulations message if you match all 5 numbers

## Building and Running

### Prerequisites

- C++ compiler with C++11 support (e.g., g++, MSVC, clang++)
- Visual Studio (for .vcxproj files) or command-line C++ compiler

### Using Visual Studio

1. Open `homework6.vcxproj` in Visual Studio
2. Build the solution (Ctrl+Shift+B)
3. Run the program (F5 or Ctrl+F5)

### Using Command Line (g++)

```bash
g++ homework6.cpp -o lottery
./lottery
```

### Using Command Line (MSVC)

```bash
cl homework6.cpp
homework6.exe
```

## Project Structure

```
.
├── homework6.cpp              # Main source code file
├── homework6.vcxproj          # Visual Studio project file
├── homework6.vcxproj.filters  # Visual Studio filters configuration
├── homework6.vcxproj.user     # Visual Studio user settings
├── Debug/                     # Debug build output directory
└── README.md                  # This file
```

## Code Overview

The program consists of the following functions:

- `main()` - Main program flow and initialization
- `userGuess(int[])` - Gets 5 numbers from the user
- `randomNum(int[])` - Generates 5 random lottery numbers (0-9)
- `matchCheck(int[], int[])` - Compares user numbers with lottery numbers
- `printNumbers(int[], int[], int)` - Displays results and matches

## Example Output

```
Welcome to the Lottery
Enter 5 numbers from 0 - 9: 1 2 3 4 5

*************** Lottery Numbers ***************
Random Numbers: 3  1  3  7  5  
Your numbers:   1  2  3  4  5  

Number of matches: 2
```

If all numbers match:
```
Welcome to the Lottery
Enter 5 numbers from 0 - 9: 1 2 3 4 5

*************** Lottery Numbers ***************
Random Numbers: 1  2  3  4  5  
Your numbers:   1  2  3  4  5  

Number of matches: 5
*********************************************
Congradulations, you are a grand prize winner!
*********************************************
```

## Author

- **Name:** Robert Bennethum
- **Email:** rmb6287@psu.edu
- **Class:** CMPSC 121
- **Project:** Homework 6
- **Due Date:** 11/19/2021

## License

This is an educational project created for coursework purposes.
