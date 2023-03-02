#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: the first string
 * @s2: second string
 * Return: 0 if s1 == s2
 *            negative number if s1 < s2
 *            postive number if s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
