#include <stdio.h>

/**
 * main - print Fibonacci sequence up to the 98th term
 * Return: 0
 */
int main(void)
{
long int first, second, next, i;


/*Initialize the first two terms of the Fibonacci sequence*/
first = 1;
second = 2;

/*Print the initial values*/
printf("%ld, %ld, ", first, second);

/*Generate and print the Fibonacci sequence up to the 98th term*/
for (i = 3; i <= 98; i++)
{
/*Calculate the next term in the sequence*/
next = first + second;

/*Print the current term with appropriate formatting*/
if (i == 98)
{
printf("%ld", next);
}
else
{
printf("%ld, ", next);
}

/*Update values for the next iteration*/
first = second;
second = next;
}

/*Print a newline at the end*/
printf("\n");
return (0);
}
