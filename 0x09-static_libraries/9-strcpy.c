#include "main.h"
/**
*_strcpy - will copy the string pointed to by src
*@dest: A pointer to a char to be updated
*@src: A pointer to a char to be updated
*Return: dest for correct output
*/

char *_strcpy(char *dest, char *src)
{

int i;

i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);

}
