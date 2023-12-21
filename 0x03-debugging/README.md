Debugging Project - README


Learning Objectives
This debugging project focuses on enhancing your understanding of debugging in C. The specific learning objectives include:

Understanding Debugging:
Gain an understanding of the concept of debugging in software development.
Manual Debugging Techniques:
Learn various methods of manual debugging, such as inserting print statements, using debuggers, and analyzing program flow.
Interpreting Error Messages:
Develop skills to read and interpret error messages effectively, aiding in the identification and resolution of issues in the code.


Task 0

Objective:

Create and test a file named 0-main.c to verify the correctness of the positive_or_negative() function with a specific case.

Instructions:

Based on the provided main.c file, create 0-main.c to test the positive_or_negative() function.
You are testing the function and not coding the solution.
The existing code can be adapted from the earlier C project (0x01. C - Variables, if, else, while - Task #0) for local testing.
Compile using gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c 0-main.c -o 0-main.
Execute the program with ./0-main.


Task 1

Objective:

Identify and comment out the part of the code causing an infinite loop.

Instructions:

Copy the provided 1-main.c file.
Comment out the section causing the infinite loop without adding or removing lines.
Compile using gcc -std=gnu89 1-main.c -o 1-main.
Execute the program with ./1-main.


Task 2

Objective:

Fix the code in 2-largest_number.c to correctly determine and print the largest of three numbers.

Instructions:

Review the provided 2-main.c and 2-largest_number.c.
Identify and correct the issue in the largest_number() function.
Compile using gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main.
Execute the program with ./2-main.



Task 3

Objective:

Correct the program that converts a date to the day of the year, considering leap years.

Instructions:

Examine the files 3-main_a.c, 3-convert_day.c, and 3-print_remaining_days.c.
Identify and fix the issue in the print_remaining_days() function to handle leap years correctly.
Compile using gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a.
Test with the provided test case (Date: 02/29/2000) and ensure the output is correct.
