#include <stdio.h>
/**
 * main - prints the sum of all multiple of 3 or 5 up to 1024
 *
 * Return: 0
 */
int main(void)
{
	int i, z = 0;

	while (1 < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			z += i;
		}
		i++
	}
	printf("%d\n", z);
	return (0);
}
