#ifndef MAIN_H
#define MAIN_H
/**
 * _putchar - prints one character
 */
int _putchar(char c);
/**
 * *_strcat - concatenates two strings
 */
char *_strcat(char *dest, char *src);
/**
 * *_strncat - concatenates two strings
 */
char *_strncat(char *dest, char *src, int n);
/**
 * *_strncpy - copies a string
 */
char *_strncpy(char *dest, char *src, int n);
/**
 * _strcmp - compares two strings
 */
int _strcmp(char *s1, char *s2);
/**
 * reverse_array - reverses the content of an array of integers
 */
void reverse_array(int *a, int n);
/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 */
char *string_toupper(char *);
/**
 * *cap_string - capitalizes all words of a string
 */
char *cap_string(char *);
/**
 * *leet - encodes a string into 1337
 */
char *leet(char *);
/**
 * *rot13 - encodes a string using rot13
 */
char *rot13(char *);
/**
 * print_number - prints an integer
 */
void print_number(int n);
/**
 * *infinite_add - adds two numbers
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r);
/**
 * print_buffer - prints a buffer
 */
void print_buffer(char *b, int size);
#endif
