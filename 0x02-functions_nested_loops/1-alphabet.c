#include <stdio.h>
#inlude "main.h"
/*main-entry point*/
/*Return: 0*/

int main(void)
{
	char letter ='a';
	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}
	_putchar('\n');
	return (0);
}
