#include <stdio.h>
/*main-entry point of fibonacci*/
/*Return: 0*/
void fibonacci_sequence(void)
{
	int a = 1;
	int b = 2;
	int count = 2;

	printf("%d, %d, ", a, b);

	while (count < 98)
	{
	int c = a + b;

	printf("%d, ", c);
	a = b;
	b = c;
	count++;
	}
}

int main(void)
{
	fibonacci_sequence();
	printf("\n");

	return (0);
}

