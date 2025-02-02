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
if (i > 0) /* Only print separator after the first value */
sep = ", ";

switch (format[i])
{
case 'c':
printf("%s%c", sep, va_arg(args, int));
break;
case 'i':
printf("%s%d", sep, va_arg(args, int));
break;
case 'f':
printf("%s%f", sep, va_arg(args, double));
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s%s", sep, str);
break;
}
i++;
}

va_end(args);
printf("\n");
}
