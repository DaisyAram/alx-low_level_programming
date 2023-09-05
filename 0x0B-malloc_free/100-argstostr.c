#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program
 * @av: double pointer array
 * @ac: integer input
 * Returns: 0
 */
char *argstostr(int ac, char **av)
{
	int j, a, b = 0, c = 0;

	char *str;

	if (ac == 0 || av == NULL)
	return (NULL);

	for (j = 0; j < ac; j++)
	{
	for (a = 0; av[j][a]; a++)
	c++;
	}
	c += ac;

	str = malloc(sizeof(char) * c + 1);
	if (str == NULL)
	return (NULL);

	for (j = 0; j < ac; j++)
	{
	for (a = 0; av[j][a]; a++)

	{
	str[b] = av[j][a];
	b++;
	}
	if (str[b] == '\0')
	{
	str[b++] = '\n';
	}
	}
	return (str);
}
