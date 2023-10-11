#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string whose length is to be determined
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
		return (_strlen_recursion(s + 1) + 1);
	else
		return (0);
}
/**
 * comparator - compares each character of a string
 * @s: string
 * @i: small iterator
 * @j: big iterator
 * Return: 1 if it is a palindrome and 0 otherwise
 */
int comparator(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
			return (1);
		return (comparator(s, i + 1, j - 1) + 0);
	}
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to be checked
 * Return: 1 if string is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
