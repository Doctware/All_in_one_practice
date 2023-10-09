#include "main.h"

/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	int n;

	n = 402;
	printf("n=%d\n", n);
	reset_to_98(&n);
	printf("n=%d\n", n);
	return (0);
}
#include "main.h"

/**
 * reset_to_98 - reset the value
 * Return: The value
 */

void reset_to_98(int *n)
{
	*n = 10;
}
#include "main.h"

/**
 * main - check the code
 * Return: Always 0
 */

int main(void)
{
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	swap_int(&a, &b);
	printf("a=%d, b=%d\n", a, b);
	return (0);
}
#include "main.h"

/**
 * swap_int - swap the values
 * @a: swap it value to b value
 * @b:swap it value to a value
 * Return: value
 */

void swap_int(int *a, int *b)
{
	int sw;

	sw = *a;
	*a = *b;
	*b = sw;
}
#include "main.h"

/**
 * main - check the code
 * Return: 0 Always
 */

int main(void)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
#include "main.h"

/**
 * _strlen - get the lenth of the str
 * @str: the string
 * Return: lenth
 */

int _strlen(char *s)
{
	int l = 0;

	while(*s != '\0')
	{
		s++;
		l++;
	}
	return (l);
}
#include "main.h"

/**
 * main - check the code 
 * Return: 0 Always
 */

int main(void)
{
	char *str;

	str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
	_puts(str);
	return (0);
}
#include "main.h"

/**
 * _put - print to stdout
 * @str: string to print
 * Return: string
 */

void _puts(char *str)
{
	while(*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: 0
 */

int main(void)
{
	char *str;

	str = "I dont fear computer. I fear the lack of them - Issac Asimov";
	print_rev(str);
	return (0);
}
#include "main.h"

/**
 * print_rev - print the ords in reverse
 * @s: pointing to the variable of the words
 * Return: success
 */

void print_rev(char *s)
{
	int lent = 0;
	int i = 0;

	while(s[lent] != '\0')
	{
		lent++;
	}
	
	for (i = lent; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
#include "main.h"

/**
 * ma - check the code
 *
 * Return: 0
 */

int main(void)
{
	char s[10] = "My School";

	printf("%s\n", s);
	rev_string(s);
	printf("%s\n", s);
	return (0);
}
#include "main.h"

/**
 * rev_string - print the string in revese
 * @s: pointing to the variable of the string
 * Return: success
 */

void rev_string(char *s)
{
	int lnt = 0;
	int i = 0;
	int swp;

	while(s[lnt] != '\0')
	{
		lnt ++;
	}

	lnt--;

	while (i < lnt)
	{
		swp = s[i];
		s[i] = s[lnt];
		s[lnt] = swp;

		i++;
		lnt--;
	}
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: o
 */

int main(void)
{
	char *str;

	str = "0123456789";
	puts2(str);
	return (0);
}
#include "main.h"

/**
 * puts2 - print every other char from 1st one
 * @str: pointig to variable of the value
 * Return: 0 always
 */

void puts2(char *str)
{
	int st = 0;

	while (str[st] != '\0')
	{
		_putchar(str[st]);
		st += 2;
	}
	_putchar('\n');
}
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0
 */

int main(void)
{
	char *str;
	puts_half(str);
	return (0);
}
#include "main.h"

/**
 * puts_half - print half of the string
 * @str: pointing to the varable of string
 * Return: success
 */

void puts_half(char *str)
{
	int lent = 0;

	while (str[lent] != '\0')
	{
		if (lent == 4)
		{
			break;
		}
		else if (lent == 5)
		{
			continue;
			_putchar(str[lent]);
			lent++;
		}
	}
	_putchar('\n');
}
#include <unistd.h>

/**
 * _puchar - write to the standard output
 * @c: character to be writen
 * Return: char
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
