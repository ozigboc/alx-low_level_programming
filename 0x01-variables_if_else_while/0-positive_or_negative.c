#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Description: print positive number if n is greater than 0
 * print negative when n is less than 0 and zero when n is 0
 *
 * Return 0
 * */
 
int main(void)
		
{
	int n;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	printf("%d is positive\n",n);
	else if (n < 0)
	printf("%d is negative\n",n);
	else
	printf("%d is zero\n",n);
	return (0);
	
}
