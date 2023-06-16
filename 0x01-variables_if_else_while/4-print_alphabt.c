#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the alphabet removing q and e.
 *
 * Return: Always 0 (Success) no error
 */
int main(void)
{
	int i;
	char alp[26] = "abcdefghijklmnopqrstuvwxyz";
	for (i = 0; i < 26; i++)
	{
		if (i != 4 && i != 16)
		{
			putchar(alp[i]);
		}
	}
	putchar('\n');
	return (0);
}
