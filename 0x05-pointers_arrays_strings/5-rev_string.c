#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int Counter = 0;
	int i;

	while (s[Counter] != '\0')
	Counter++;
	for (i = 0; i < Counter; i++)
	{
		Counter--;
		rev = s[i];
		s[i] = s[Counter];
		s[Couter] = rev;
	}
}
