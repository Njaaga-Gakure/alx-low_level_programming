#include "variadic_functions.h"

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters in sum_them_all
 * Return: returns the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, x, sum;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);
	sum = 0;
	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum = sum + x;
	}
	return (sum);
	va_end(nums);

	return (0);

}
