#include <stdio.h>
/*main-entry point*/
/*Return: Always 0*/
int main(void)
{
	int i;

	for (i = 25; i >= 0; i--)
	{
	putchar('a' + i);
	}
	putchar('\n');
	return (0);
}
