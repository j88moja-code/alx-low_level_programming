#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int check_length(char *str);
char *make_x_array(int size);
char *iterate_zeroes(char *str);
void get_product(char *product, char *mult, int digit, int zeroes);
void add_nums(char *final_prod, char *next_prod, int next_len);

/**
  * check_length - searched the length of a string
  *
  * @str: string to be checked.
  *
  * Return: length of the string.
  */

int check_length(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
  * build_x_array - creates an array of chars with char x and end with null byt
  *
  * @size: size of the array to be initialised.
  *
  * Return: pointer to the array.
  */

char *build_x_array(int size)
{
	char *pointer;
	int i;

	pointer = malloc(sizeof(char) * size);

	if (pointer == NULL)
		exit(98);

	for (i = 0; i < (size - 1); i++)
		pointer[i] = 'x';

	pointer[i] = '\0';
	return (pointer);
}

/**
  * iterate_zeroes - iterates through a string of numbers containing leading 0s
  *
  * @str: pointer to a string of numbers to be iterated.
  *
  * Return: pointer to the next non-zero eleemt.
  */

char *iterate_zeroes(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
  * get_digit - converts a digit char to a corresponding int.
  *
  * @c: the character to be converted.
  *
  * Return: converted int.
  */

int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
  * get_product - multiplies a string of numbers by a single digit.
  *
  * @product: buffer for the results.
  * @mult: the string of numbers.
  * @digit: single digit.
  * @zeroes: necessary number of leading zeroes.
  *
  * Return: nothing.
  */

void get_product(char *product, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = check_length(mult) - 1;
	mult += mult_len;

	while (*product)
	{
		*product = 'x';
		product++;
	}
	product--;

	while (zeroes--)
	{
		*product = '0';
		product--;
	}

	for (; mult_len >= 0; mult_len--, mult--, product--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*product = (num % 10) + '0';
		tens = num / 10;
	}
	if (tens)
		*product = (tens % 10) + '0';
}

/**
  * add_nums - adds the numbers stored in two strings.
  *
  * @final_prod: buffer for storing the current final product.
  * @next_prod: next product ot be added.
  * @next_len: length of the next product.
  *
  * Return: nothing.
  */

void add_nums(char *final_prod, char *next_prod, int next_len)
{
	int num, tens = 0;

	while (*(final_prod + 1))
		final_prod++;

	while (*(next_prod + 1))
		next_prod++;

	for (; *final_prod != 'x'; final_prod--)
	{
		num = (*final_prod - '0') + (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		next_prod--;
		next_len--;
	}

	for (; next_len >= 0 && *next_prod != 'x'; next_len--)
	{
		num = (*next_prod - '0');
		num += tens;
		*final_prod = (num % 10) + '0';
		tens = num / 10;

		final_prod--;
		next_prod--;
	}

	if (tens)
		*final_prod = (tens % 10) + '0';
}

/**
  * main - checks the code.
  *
  * @av: arguments vector.
  * @ac: argument counter.
  *
  * Return: Always 0.
  */

int main(int ac, char *av[])
{
	char *final_prod, *next_prod;
	int size, i, digit, zeroes = 0;

	if (ac != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(av[1]) == '0')
		av[1] = iterate_zeroes(av[1]);
	if (*(av[2]) == '0')
		av[2] = iterate_zeroes(av[2]);
	if (*(av[1]) == '\0' || *(av[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = check_length(av[1]) + check_length(av[2]);
	final_prod = build_x_array(size + 1);
	next_prod = build_x_array(size + 1);

	for (i = check_length(av[2]) - 1; i >= 0; i--)
	{
		digit = get_digit(*(av[2] + i));
		get_product(next_prod, av[1], digit, zeroes++);
		add_nums(final_prod, next_prod, size - 1);
	}
	for (i = 0; final_prod[i]; i++)
	{
		if (final_prod[i] != 'x')
			putchar(final_prod[i]);
	}
	putchar('\n');

	free(next_prod);
	free(final_prod);

	return (0);
}
