#include <stdio.h>
/**
  *main - prints the aphabet in lowercase
  *Return: always 0
  */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
