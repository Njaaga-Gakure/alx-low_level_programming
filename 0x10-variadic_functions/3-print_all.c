#include "variadic_functions.h"

/**
 * _strlen - checks length of a string
 * @str: the string
 * Return: returns the length of the string
 */
unsigned int _strlen(const char * const str)
{
	unsigned int len;

	len = 0;
	while (str[len] != '\0' && str != NULL)
		len++;
	return (len);
}

/**
 * print_all - prints anything
 * @format: data type
 */
void print_all(const char * const format, ...)
{
	unsigned int i, n;
	va_list args;
	char *s;

	n = _strlen(format);

	va_start(args, format);
	i = 0;
	while (format != NULL && i < n)
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char*);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				i++;
				continue;
		}
		if (i < n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(args);
}

