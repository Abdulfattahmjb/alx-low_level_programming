#include <stdio.h>
/* main-This is the program starting point*/
/* Return: Always 0*/
int main(void)
{
	int i;

	for (i = 0; i < 26; i++)
{
	char letter = 'a' + i;

	if (letter != 'q' && letter != 'e')
	{
		putchar(letter);
	}
}

	putchar('\n');
	return (0);
}


