#include "s.h"
#include <stdio.h>

typedef struct device laptop;
int main(void)
{
	laptop lap;

	lap.number = 3;
	lap.name = "hp";
	lap.colour = " black";
	{
	printf("%s, colour %s, number %d\n", lap.name, lap.colour, lap.number);
	}
	return (0);
}
