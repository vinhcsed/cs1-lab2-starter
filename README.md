# CS1: Lab 2

## Setup
1. Update the contents of *ID.txt* with your identifier (school email **without @school.edu**)
2. Write pseudocode for your program in *PSEUDO.txt*

## How to Run Your Program
* [**WINDOWS**] In VSCode, press the play button in the top right corner (it should appear when you open a `.cpp` file). Your program should compile and run.
* [**MAC/LINUX**] Open a Terminal. Type `make` and press return. Your program should compile and run.

## Assignment Specification
### Simple Addition Calculator
#### Part I. Vertical Output
1. Implement this program in `main.cpp`.
2. Declare three `float` variables called `x, y, z`.
3. Initialize `x` to `3.0` and `y` to `15.73`.
4. Initialize `z` to the sum of `x` and `y`.
5. Print a vertical sum expression to the screen using these variables such that it *exactly* matches the example below.
   - Each line should display precisely two decimal places.
   - The decimal points should be aligned vertically.
```
   3.00
+ 15.73
-------
  28.73
```

#### Part II. Interactive Input
1. Update your program from *Part I* to take input from the terminal.
2. The program should display two prompts asking for two numbers.
3. Print a vertical sum expression using those two numbers (see example run below).
   - Each line should display precisely two decimal places.
   - The decimal points should be aligned vertically.
   - Assume that inputs are limited to decimal values from 0 through 99.
   - Assume that the sum will never exceed 999.
```
Enter a number: 25.51
Enter a number: 75
  25.51
+ 75.00
-------
 100.51
```  

## Submission
1. Remember to *commit* and *push* your changes to this repository.
