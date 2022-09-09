#include <stdio.h>
/**
 * main -Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (Success)
 */
int main (void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		++ch;
	}
	putchar('\n')

	return (0);
}
