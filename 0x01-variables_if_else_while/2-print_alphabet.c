#include <stdio.h>

/**
 * Main - Entry point
 * Description: program that prints alphabets
 * Return: Always (Success)
 */
int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
