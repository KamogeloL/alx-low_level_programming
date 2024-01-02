0x05.C - Pointers, Arrays, and Strings

This project focuses on fundamental concepts like pointers, arrays, and strings in the C programming language. The learning objectives include understanding the use of pointers and arrays, recognizing the differences between them, manipulating strings, and comprehending the scope of variables.

Requirements

Editors: vi, vim, emacs
Compilation: Ubuntu 20.04 LTS, gcc with options -Wall -Werror -Wextra -pedantic -std=gnu89
Files must end with a new line
Mandatory README.md file at the project's root
Code should adhere to the Betty style
No global variables allowed
Each file should contain no more than 5 functions
Standard library functions (e.g., printf, puts) are forbidden
Allowed to use _putchar
No need to push _putchar.c
Prototypes for all functions and _putchar should be in main.h
Push the header file


Task Summaries

Task 0 - 98 Battery st.

Objective:
Write a function that takes a pointer to an int as a parameter and updates the value it points to 98.

Instruction:
Prototype: void reset_to_98(int *n);

Task 1 - Don't swap horses in crossing a stream

Objective:
Write a function that swaps the values of two integers.

Instruction:
Prototype: void swap_int(int *a, int *b);

Task 2 - This report, by its very length, defends itself against the risk of being read

Objective:
Write a function that returns the length of a string.

Instruction:
Prototype: int _strlen(char *s);

Task 3 - I do not fear computers. I fear the lack of them

Objective:
Write a function that prints a string, followed by a new line, to stdout.

Instruction:
Prototype: void _puts(char *str);

Task 4 - I can only go one way. I've not got a reverse gear

Objective:
Write a function that prints a string, in reverse, followed by a new line.

Instruction:
Prototype: void print_rev(char *s);

Task 5 - A good engineer thinks in reverse...

Objective:
Write a function that reverses a string.

Instruction:
Prototype: void rev_string(char *s);

Task 6 - Half the lies they tell about me aren't true

Objective:
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Instruction:
Prototype: void puts2(char *str);

Task 7 - Winning is only half of it. Having fun is the other half

Objective:
Write a function that prints half of a string, followed by a new line.

Instruction:
Prototype: void puts_half(char *str);

Task 8 - Arrays are not pointers

Objective:
Write a function that prints n elements of an array of integers, followed by a new line.

Instruction:
Prototype: void print_array(int *a, int n);

Task 9 - strcpy

Objective:
Write a function that copies the string pointed to by src to the buffer pointed to by dest.

Instruction:
Prototype: char *_strcpy(char *dest, char *src);