#include "main.h"
/**
 * print_numbers -
 * @format:
 * Return:
 */
int _printf(const char *format, ...)
{
    int i = 0, contador = 0;
    
    if (format == NULL)
    {
        return (-1);
    }
    va_list lista;
    int (*lista_nueva)(va_list);

    while (format[i])
    {
        for (i = 0; format[i] != '%' && format[i]; i++)
        {
            putchar(format[i]);
            contador++;
        }
        if(!format[i])
        {
            return (contador);
        }
        
    }
    
}
