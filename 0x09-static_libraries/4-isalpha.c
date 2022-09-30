#include "main.h"
/**
 * _isalpha - checks for alphabets
 *
 * c: to scan through all characters
 *
 * Return: 1 if c is a letter,  otherwise return 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
