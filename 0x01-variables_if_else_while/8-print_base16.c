#include <unistd.h>
#include <stdio.h>
/**
 * main -Entry point
 * Description: prints lowercase alphabets in reverse order
 * Return: Always 0 (Success)
 */
int main (void)
{
	int a;

	for (a = 'z'; a >= 'a'; a--)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
