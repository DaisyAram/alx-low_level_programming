#include <stdio.h>
#include "main.h"

int main(void)
{
	struct cat piper;
	struct cat *ptr_cat;

	ptr_cat = &piper;

	(*ptr_cat).age = 2;
	ptr_cat->name = "miss.piper";
	piper.colour = "grey";

	printf("My cat's name is %s, She is %i years old and %s in colour\n", piper.name, piper.age, piper.colour);
	
return (0);
}
