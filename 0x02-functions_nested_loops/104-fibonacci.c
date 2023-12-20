#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers separated by commas
 * Return: Always 0.
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2, next_term;
int count;

printf("%lu, %lu", fib1, fib2); // Print the first two Fibonacci numbers

for (count = 3; count <= 98; ++count)
{
next_term = fib1 + fib2;

printf(", %lu", next_term);

fib1 = fib2;
fib2 = next_term;
}

printf("\n");
return (0);
}

