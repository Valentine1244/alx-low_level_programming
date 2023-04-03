#include "main.h"
/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0 (Success)
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *g = needle;

		while (*l == *g && *g != '\0')
		{
			l++;
			g++;
		}

		if (*g == '\0')
			return (haystack);
	}

	return (0);
}
