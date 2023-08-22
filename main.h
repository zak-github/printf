#include "main.h"

/**
 * get_specifier_handler - Function that gets the specifier handler
 * @spc: Specifier
 *
 * Return: Int
 */
int (*get_specifier_handler(char spc))(va_list args)
{
	spc_t specifiers[] = {
			{'c', handle_char},
			{'s', handle_string},
			{'%', handle_percent},
			{'d', handle_d_i},
			{'i', handle_d_i},
			{'\0', NULL}
	};
	int i;

	i = 0;

	while (specifiers[i].spc != '\0')
	{
		if (specifiers[i].spc == spc)
			return (specifiers[i].spc_handler);
		i++;
	}

	return (NULL);
}
