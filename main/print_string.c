#include "main.h"

/**
 * print_string - print a string.
 * @arg: argumen t.
 * Return: the length of the string.
 */
int print_string(va_list arg)
{
	char *s;
	int i, len;

	s = va_arg(arg, char*);
	if (s == NULL)
	{
		s = "(null)";
		len = _strlen(s);

		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
	else
	{
		len = _strlen(s);
		for (i = 0; i < len; i++)
		{
			_putchar(s[i]);
		}
		return (len);
	}
}

/**
 * print_revStr - print a string in reverse
 * @args: string arg
 * Return: 1
 */

int print_revStr(va_list args)
{
	char *s = va_arg(args, char*);
	int i;
	int j = 0;

	if (s == NULL)
		s = "(null)";
	while (s[j] != '\0')
		j++;
	for (i = j - 1; i >= 0; i--)
		_putchar(s[i]);
	return (j);
}

/**
 * print_rot13 - encode a string by rotating for 13char
 * @args: string arg
 * Return: 1
 */
int print_rot13(va_list args)
{
	int i, j, counter = 0;
	int k = 0;
	char *s = va_arg(args, char*);
	char alpha[] = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
	char beta[] = {"nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM"};

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		k = 0;
		for (j = 0; alpha[j] && !k; j++)
		{
			if (s[i] == alpha[j])
			{
				_putchar(beta[j]);
				counter++;
				k = 1;
			}
		}
		if (!k)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}


/**
 * print_char - prints char
 * @args: args
 * Return: 1
 */
int print_char(va_list args)
{
	char s;

	s = va_arg(args, int);
	_putchar(s);
	return (1);
}

/**
 * print_percent - prints percent char
 * Return: 1
 */

int print_percent(void)
{
	_putchar(37);
	return (1);
}
