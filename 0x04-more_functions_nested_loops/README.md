Project Title: 0x04. C - More functions, more nested loops

Learning Objectives
* Understand and implement nested loops
* Learn about functions and their usage
* Differentiate between the declaration and definition of a function
* Understand the concept of prototypes
* Explore the scope of variables
* Utilize gcc flags such as -Wall, -Werror, -pedantic, -Wextra, -std=gnu89
* Work with header files and include them using #include

Requirements
* Allowed Editors: vi, vim, emacs
* Compilation: All files will be compiled on Ubuntu 20.04 LTS using gcc with the options -Wall, -Werror, -Wextra, -pedantic, -std=gnu89.
* File Ending: All files should end with a new line.
* README.md: A README.md file at the root of the project folder is mandatory.
* Coding Style: Your code should follow the Betty style and will be checked using betty-style.pl and betty-doc.pl.
* Global Variables: Not allowed.
* Functions per File: No more than 5 functions per file.
* Standard Library: You are not allowed to use the standard library, including functions like printf, puts, etc. However, _putchar is allowed.
* Header Files: The prototypes of all functions and the prototype of the function _putchar should be included in a header file named main.h. Don't forget to push your header file.
* Header File Usage: Use #include to include header files.
* Task-specific Instructions: Follow task-specific instructions provided for each function.
* Testing: You can use the provided main.c files to test your functions, but do not push them to your repo. The main.c files used for compilation may be different.
* Prototype in README: Include the prototype of each function in this README.

Task 0 - 0-isupper.c

Objective:

Understand how to check if a character is an uppercase letter.

Instructions:

Write a function int _isupper(int c) that checks if the given character c is an uppercase letter.
Return 1 if it is an uppercase letter, and 0 otherwise.


Task 1 - 1-isdigit.c

Objective:

Learn how to check if a character is a digit.

Instructions:

Write a function int _isdigit(int c) that checks if the given character c is a digit (0 through 9).
Return 1 if it is a digit, and 0 otherwise.


Task 2 - 2-mul.c

Objective:

Implement a function to multiply two integers.

Instructions:

Write a function int mul(int a, int b) that multiplies two integers a and b.
Return the result of the multiplication.


Task 3 - 3-print_numbers.c

Objective:

Print numbers from 0 to 9.

Instructions:

Write a function void print_numbers(void) that prints the numbers from 0 to 9, followed by a new line.
Use _putchar function to print.


Task 4 - 4-print_most_numbers.c

Objective:

Print numbers excluding 2 and 4.

Instructions:

Write a function void print_most_numbers(void) that prints the numbers from 0 to 9 (excluding 2 and 4), followed by a new line.
Use _putchar function to print.


Task 5 - 5-more_numbers.c

Objective:

Print numbers multiple times.

Instructions:

Write a function void more_numbers(void) that prints 10 times the numbers from 0 to 14, followed by a new line.
Use _putchar function to print.


Task 6 - 6-print_line.c

Objective:

Draw a straight line in the terminal.

Instructions:

Write a function void print_line(int n) that draws a straight line in the terminal.
The line should end with a new line.
If n is 0 or less, print only a new line.
Use _putchar function to print.


Task 7 - 7-print_diagonal.c

Objective:

Draw a diagonal line in the terminal.

Instructions:

Write a function void print_diagonal(int n) that draws a diagonal line in the terminal.
The diagonal should end with a new line.
If n is 0 or less, print only a new line.
Use _putchar function to print.


Task 8 - 8-print_square.c

Objective:

Print a square in the terminal.

Instructions:

Write a function void print_square(int size) that prints a square, followed by a new line.
If size is 0 or less, print only a new line.
Use the character '#' to print the square.
Use _putchar function to print.


Task 9 - 9-fizz_buzz.c

Objective:

Implement the Fizz-Buzz test.

Instructions:

Write a program that prints the numbers from 1 to 100.
For multiples of 3, print "Fizz" instead of the number.
For multiples of 5, print "Buzz" instead of the number.
For multiples of both 3 and 5, print "FizzBuzz".
Each number or word should be separated by a space.
You are allowed to use the standard library.


Task 10 - 10-print_triangle.c

Objective:

Print a triangle in the terminal.

Instructions:

Write a function void print_triangle(int size) that prints a triangle, followed by a new line.
If size is 0 or less, print only a new line.
Use the character '#' to print the triangle.
Use _putchar function to print.