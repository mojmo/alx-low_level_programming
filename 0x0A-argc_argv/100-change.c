#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money.
 *
 * @argc: the number of command line arguments.
 * @argv: the command line arguments.
 *
 * Return: 0 if successed, 1 if the number of arguments passed
 * to your program is not exactly.
 */

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int i, res = 0;
		int money = atoi(argv[1]);
		int coins[] = {25, 10, 5, 2, 1};

		for (i = 0; i < (int)sizeof(coins) / 4; i++)
		{
			if (money >= coins[i])
			{
				if (money % coins[i] == 0)
				{
					res += money / coins[i];
					break;
				}
				res += money / coins[i];
				money = money % coins[i];
			}
		}
		printf("%d\n", res);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
