#include <stdio.h>
#include "s.h"


int main(void)
{
	struct device laptop;
       
	laptop.number = 2;
	laptop.name = "windows";
	laptop.colour = "pink";

	{
	printf ("%s, %d, %s\n", laptop.name, laptop.number, laptop.colour);
	}
	return(0);
}
