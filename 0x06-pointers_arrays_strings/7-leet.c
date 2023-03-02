#include "main.h"
/**
 * *leet - function that encodes a string into 1337
 * @str: string to be encoded
 * Return: returns encoded string
 */

char *leet(char *)
{
	int index1 = 0, index2;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[index1])
	{
		for (index2 = 0; index2 <= 7; index2++)
		{
			if (str[index1] == leet[index2] || str[index1] - 32 == leet[index2])
				str[index1] = index2 + '0';
		}

		index++;
	}
	return (str);
}
