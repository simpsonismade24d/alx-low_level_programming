#include "main.h"

/**
*puts_half - prints all characters of a string
*@str: A pointer to int that will be updated
*Return: void which means our answer is correct
*/

void puts_half(char *str)

{
int i, last;

i = 0;
while (str[i] != '\0')
{
i++;
}

last = (i + 1) / 2;

for (i = last; str[i]; i++)
{
_putchar (str[i]);
}

_putchar ('\n');

}
