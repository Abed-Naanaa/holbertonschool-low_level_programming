#include <stdio.h>
#include <stdarg.h>

/**
*print_all - Prints anything based on the specified format.
*@format: A list of types of arguments passed to the function.
*/
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str, *sep = "";
va_list args;

va_start(args, format);

while (format && format[i])
{
if (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's')
{
printf("%s", sep);
if (format[i] == 'c')
printf("%c", va_arg(args, int));
else if (format[i] == 'i')
printf("%d", va_arg(args, int));
else if (format[i] == 'f')
printf("%f", va_arg(args, double));
else if (format[i] == 's')
{
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}
sep = ", ";
}
i++;
}

va_end(args);
printf("\n");
}
