#include "main.h"
/**
 * _pow_recursion - returns the value of x raised to power y
 * @x: input value
 * @y: power raised
 * Return: result of power raised
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	return (-1);
	if (y <= 0)
	return (1);
	return (x * _pow_recursion(x, y - 1));
}
