#include "main.h"

/**
 * _strstr - finds the first occurrence of the substring needle
 * in the string haystack
 *
 * @haystack: string to work on
 * @needle: substring to match
 * Return: pointer to the first match or NULL
 */
char  *_strstr(char *haystack, char *needle)
{
	char *str1, *str2; /*Declaring variables*/

	while (*haystack != '\0')
	{
		str1 = haystack; /*values*/
		str2 = needle;

		/*Star WHILE*/
		while (*haystack != '\0' && *str2 != '\0' && *haystack == *str2){
			haystack++;
			str2++;
		}
		if (*str2 == '\0')
			return (str1);
		haystack = str1 + 1;
	}
	return (0);
}
