#include "main.h"

/**
 *  * print_alphabet_x10 - print alphabet 10 times
 *   *
 *    * Return: Always 0
 *     */
void print_alphabet_x10(void)
{
		int k, go;

			go = 0;

				while (go < 10)
						{
									for (k = 'a'; k <= 'z'; k++)
												{
																_putchar(k);
																		}
											go++;

													_putchar('\n');
														}

}
