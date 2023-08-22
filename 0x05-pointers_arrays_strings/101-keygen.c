#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point of program.
 *
 * Description: We need to create a password, and for it to be
 *              considered acceptable, the total of its ASCII
 *              character values must equal 2772.
 *
 * Return: Always 0 (success).
 *
 * Example: assume sum = 2675,
 *          2772 - 2675 = 97
 *          97 will be last character in the password.
 *          because 97 + 2675 = 2772
 */

int main(void)
{
	char pass;
	int sum = 0;

	srand(time(NULL));

	while (sum <= 2645)
	{
		pass = rand() % 128;
		sum += pass;
		putchar(pass);
	}
	putchar(2772 - sum);

	return (0);
}
