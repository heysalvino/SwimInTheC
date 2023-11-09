# A Swim in the C - Assignment README

**Course:** CMS 230 - Fall 2017

**Due Date:** Thursday, September 7, 11:59:59 PM

## Description

Welcome to "A Swim in the C," a programming assignment aimed at giving you hands-on practice with basic programming in C. This assignment also provides an opportunity to sharpen your skills in using the terminal environment, the compiler, and GitHub, which are valuable tools for every programmer.

This assignment consists of several programming problems that involve fundamental concepts like loops and recursion. It is designed to be a practice exercise and is not intended to be overly challenging. If you encounter difficulties, please don't hesitate to seek assistance from the instructor.

## Reading

In addition to working on the programming problems, please complete all the questions for Chapter 5 of the course ZyBook by the project deadline.

## Files and Grading

**File Submission:**

- Submit your code to your own Project-1 GitHub repository.
- For each problem, submit one .c source file named `problem1.c`, `problem2.c`, and so on.
- Include a Makefile that builds your executables from source when `make` is run at the command prompt. The executables must be named `problem1`, `problem2`, and so forth.

**Grading:**

Your code will be graded using the included Python script, `test.py`. To run the script, execute the following command:

```
prompt$ python test.py
```

The test script will:

- Build your code using `make`.
- Run your five programs.
- Compare each program's output to the expected output found in the `.cmp` files located in the `tests` directory.

Your grade will be determined by the percentage of tests you pass. A working build counts as one of the tests. Additionally, your code will be manually examined for style and problem-solving strategies, so avoid simplistic solutions that merely print the expected answers. Points may be deducted for poor programming style.

## The Problems

### Problem 1: OHAI DERE

- Write a C program that prints "Hello, World!".

### Problem 2: Super Mario Brothers Super Show

- Create a C program that generates a staircase pattern of '#' symbols, with the height controlled by a variable.
- The program should print a staircase that is 8 steps high.
- Use loops to print the correct staircase for any positive value of the height variable.

### Problem 3: FizzBuzz

- Write a program that loops through the numbers from 1 to 30 and prints each number.
- For numbers divisible by 3, print "Fizz."
- For numbers divisible by 5, print "Buzz."
- For numbers divisible by both 3 and 5, print "FizzBuzz."

### Problem 4: Everyone Needs a Hobby

- Create a recursive C program that calculates the number of stones in a ten-level ziggurat.
- Use a recursive function called `stones` to perform the calculation.
- The number of stones in an N-level ziggurat is calculated as `stones(N) = stones(N - 1) + N^2`.

### Problem 5: Binet’s Formula and Linking with Libraries

- Write a C program that uses Binet's Formula to calculate and print the first 10 Fibonacci numbers.
- Binet's Formula for the nth Fibonacci number is provided.
- Use the `sqrt` and `pow` functions from the `math.h` library to perform the calculations.
- Ensure that you link your code with the math library using the `-lm` flag when compiling.
