#include "main.h"
/**
 * *_strcat - It will concatenate the value of two strings
 * @dest: pointer destination
 * @src: pointer source
 * Return:Is void
*/

char *_strcat(char *dest, char *src)
{
int a = -1, i;
for (i = 0; dest[i] != '\0'; i++)
;

do {
	a++;
	dest[i] = src[a];
	i++;
} while (src[a] != '\0');

return (dest);
}
