#include "main.h"
/**
 * *_string_toupper - funvtion that changes lowercase to uppercase
 * @str: parameter
 * Return: character
 */

char *string_toupper(char *)
{
	int index = 0;

	while (str[index++])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
			str[index] -= 32;
	}
	return (str);
}
