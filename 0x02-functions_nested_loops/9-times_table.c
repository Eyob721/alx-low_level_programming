#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 * Return: void
 */
void times_table(void)
{
	int i, j, prdt, next_prdt;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prdt = i * j;
			if (prdt < 10)
				_putchar(prdt + '0');
			else if (prdt < 100)
			{
				_putchar(prdt / 10 + '0');
				_putchar(prdt % 10 + '0');
			}

			if (j < 9)
			{
				next_prdt = i * (j + 1);
				_putchar(',');
				if (next_prdt < 10)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (next_prdt < 100)
					_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

