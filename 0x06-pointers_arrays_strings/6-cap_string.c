#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @n: string to be capitalised
 * Return: a pointer to the changed string
 */
char *cap_string(char *n)
{
	int index;

	index = 0;
	while (n[index])
	{
		while (!(n[index] >= 'a' && n[index] <= 'z'))
			if (n[index - 1] == ' ' ||
			    n[index - 1] == '\t' ||
			    n[index - 1] == '\n' ||
			    n[index - 1] == ',' ||
			    n[index - 1] == ';' ||
			    n[index - 1] == '.' ||
			    n[index - 1] == '!' ||
			    n[index - 1] == '?' ||
			    n[index - 1] == '"' ||
			    n[index - 1] == '(' ||
			    n[index - 1] == ')' ||
			    n[index - 1] == '{' ||
			    n[index - 1] == '}' ||
			    index == 0)
				n[index] -= 32;
		index++;
	}
	return (n);
}
