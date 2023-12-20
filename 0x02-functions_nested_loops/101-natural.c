#include <stdio.h>

/**
 * main - computes and prints the sum of multiples of 3 or 5 below 1024
 *
 * Return: Always 0.
 */
int main(void)
{
int i, result; /* Declaring statements */

i = 0;
result = 0;
/* Start While */
while (i < 1024)
{
if (i % 3 == 0 || i % 5 == 0) /* Start condition IF */
{
result += i;
} /* End condition IF */
i++;
} /* END While */

printf("%d\n", result);
return (0);
}

