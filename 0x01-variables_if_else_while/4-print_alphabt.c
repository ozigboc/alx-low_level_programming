#include<stdio.h>

/**
 * main - main block
 * Description: print alphabet in
 * lowercase and uppercase with
 * the exception of 'q' and 'e'.
 */

int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar (c);

		}

		c++;
	}

	putchar ('\n');

	return (0);
}

