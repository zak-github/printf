#include "main.h"

/**
 * handle_number - Function that handel number.
 * @number: Number
 *
 * Return: VOID
 */
void handle_number(int number)
{
	if (number == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		handle_number(147483648);
		return;
	} else if (number < 0)
	{
		_putchar('-');
		number = -number;
	}
	if (number >= 10)
	{
		handle_number(number / 10);
		handle_number(number % 10);
	} else
	{
		_putchar(number + '0');
	}
}

/**
 * number_len - Function to get length of number.
 * @number: Number
 *
 * Return: Length of number
 */
int number_len(int number)
{
	int length = 0;

	if (number == 0)
		return (1);
	if (number < 0)
		length++;

	while (number != 0)
	{
		number /= 10;
		length++;
	}
	return (length);
}
