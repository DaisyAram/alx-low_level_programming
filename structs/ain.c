#include "main.h"
#include <stdio.h>
int main(void)
{
	struct britom student;

	student.age = 20;
	student.name = "nancy";
	student.grade = "78";

	printf("%s, %d, %f", student.name, student.age, student.grade);
	return (0);
}
