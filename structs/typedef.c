#include "main.h"
#include <stdio.h>

typedef struct cat catty;
int main(void)
{
	catty medow;

	medow.age = 3;
	medow.name = "madam medow";
	medow.colour = "snow white";

	printf("i have a cat by the name %s she is %d years old white a beautify %s shade\n", medow.name, medow.age, medow.colour);
	return (0);
}
