#include <stdio.h>
#include <stdlib.h>

/**
 * main - Computes and prints the sum of even-valued terms in the Fibonacci sequence below 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
    const unsigned long n = 4000000;
    unsigned long num_1, num_2, num_3;
    unsigned long result;

    result = 0;
    num_1 = 1;
    num_2 = 2;

    while (num_1 <= n)
    {
        if (num_1 % 2 == 0)
        {
            result += num_1;
        }
        num_3 = num_2;
        num_2 = num_1 + num_2;
        num_1 = num_3;
    }

    printf("%lu\n", result);
    return (0);
}
