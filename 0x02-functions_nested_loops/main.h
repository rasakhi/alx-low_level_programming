#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - writes the character c to std output
 * @c: character to write
 * Return: 1 or 0
 */
int _putchar(char c);
/**
 * print_alphabet - prints all lowercase alphabets
 */
void print_alphabet(void);
/**
 * print_alphabet_x10 - prints lowercase alphabet 10 times
 */
void print_alphabet_x10(void);
/**
 * _islower - checks if a character is a lowercase alphabet
 * @c: character to be checked
 * Return: 1 if c is lowercase or 0 otherwise
 */
int _islower(int c);
/**
 * _isalpha - checks if character is a letter
 * @c: character to be checked
 * Return: 1 if c is a letter or 0 otherwise
 */
int _isalpha(int c);
/**
 * print_sign - prints sign of a number
 * @n: number to be checked for sign
 * Return: 1 if n  > 0, 0 if n == 0, and -1 if n < 0
 */
int print_sign(int n);
/**
 * _abs - prints absolute value of an integer
 * @i: integer to be printed in absolute value
 * Return: absolute value of i
 */
int _abs(int);
/**
 * print_last_digit - prints last digit of a number
 * @n - number to print last digit of
 * Return: last digit of n
 */
int print_last_digit(int);
/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void);
/**
 * times_table - prints the 9 times table
 */
void times_table(void);
/**
 * add - adds two integers
 */
int add(int, int);
/**
 * print_to_98 - prints all natural numbers from n to 98
 */
void print_to_98(int n);
/**
 * print_times_table - prints the n times table starting from 0
 */
void print_times_table(int n);
#endif
