#include "main.h"
/**
*_puts - prints a string
*@str: A pointer to  int that will update
*
*Return: void indicates correct output
*/

void _puts(char *str)
{
char *c;
int m;

c = str;

for (m = 0; c[m]; m++)
{
_putchar (c[m]);
}
_putchar('\n');
}
