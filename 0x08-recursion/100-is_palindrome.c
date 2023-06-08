#include "main.h"

int comparator(char *s, int i, int j);
int _strlen_recursion(char *s);
/**
 * is_palindrome - detects if a string is a palindrome
 * @s: string.
 * Return: 1 if s is a palindrome and 0 otherwise
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
/**
 * comparator - compares each character of a string
 * @s: string
 * @i: smallest iterator
 * @j: biggest iterator
 * Return: 1 or 0
 */
int comparator(char *s, int i, int j)
{
	if (*(s + i) == *(s + j))
	{
		if (i == j || i == j + 1)
		{
			return (1);
		}
		return (0 + comparator(s, i + 1, j - 1));
	}
	return (0);
}
/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of string s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
