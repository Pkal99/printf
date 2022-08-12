#include "main.h"
/**
* _printf: prints anything on the stdandard out
* @format: string for formating text input
* Return: returns all characters printed
*/
int _printf(const char *format, ...)
{
	int printsc;
	toPrint func[] = {
	{"c", pchar},
	{"s", pstr},
	{"%", percent},
	};
	va_list args;

	if (format == NULL)
			return (-1);

	va_start(args, format);
	printsc = parse(format, func, args);
	va_end(args);
	return (printsc);
}
