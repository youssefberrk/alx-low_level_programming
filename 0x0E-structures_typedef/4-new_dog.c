#include <stdlib.h>
#include "dog.h"

/**
 * _strcpy - copies the content of a string to another
 * @dest: destination buffer
 * @src: source string
 *
 * Return: a pointer to the destination buffer
 */
int _strlen(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * *_strcat - concatenates the string pointed to by src
 * including the terminating null byte (\0)
 * to the string pointed to by dest
 * @dest: pointer to the destination string
 * @src: string to be appended
 *
 * Return: the pointer to the destination string
 */
{
	int len, i;

	len = 0;

	while (src[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}
/**
 * new_dog -e
