#include "main.h"
/**
  *_isalpha - Checks for alphabetic order
  *
  *@c: The character in ASCii code
  *
  *Return: 1 for letters. 0 for the rest.
  */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
