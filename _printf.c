#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * imprimir - imprime
 * @format: formatp
 * @nums: nums
 * Return: nothing
 */
void imprimir(const char *format, int nums[], ...)
{
	int o = 0;
	int arglist = 0;

	for (o = 0; format[o] != '\0'; o++)
	{
		if (format[o] == '%')
		{
			if (format[o + 1] == 'd')
			{
				printf("%d", nums[arglist]);
				arglist = arglist + 1;
			}
			if (format[o + 1] == 'i')
			{
				printf("%i", nums[arglist]);
				arglist = arglist + 1;
			}
			o = o + 1;
		}
		else
		{
			putchar(format[o]);
		}
	}

}
/**
 * _printf - aca va algo
 * @format: formatp
 * Return: tanaño del strings
 */
int _printf(const char *format, ...)
{
	int size = 0;
	int numarg = 0;
	int i, l;
	va_list lista;
	int *ptr;

	if (format == NULL)
	{
		return (-1);
	}
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			numarg = numarg + 1;
		}
		size = size + 1;
	}

	va_start(lista, format);
	ptr = (int *) malloc(numarg * sizeof(int));
	for (l = 0; l < 2; l++)
	{
		ptr[l] = va_arg(lista, int);
	}
	va_end(lista);

	imprimir(format, ptr);

	return (size);
}
