#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main-program entry point
 *
 * Return:0 if no error, non-zero value if error
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int lastDigit = abs(n) % 10;

	if (lastDigit > 5)
	{
		printf("greater thsn 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less thsn 6 and not 0\n");
	}
	return (0);
}
