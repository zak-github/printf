#ifndef MAIN
#define MAIN

#include <stdarg.h>
#include <stddef.h>

#define UNUSED(x) (void)(x)

/**
 * struct specifiers_struct - Specifiers structure
 *
 * @spc: Specifier
 * @spc_handler: The function to handel specifier
 */
typedef struct specifiers_struct
{
	char spc;

	int (*spc_handler)(va_list args);

} spc_t;

int _putchar(char c);

int _printf(const char *format, ...);

int handle_char(va_list args);

int handle_percent(va_list args);

int handle_string(va_list args);

int handle_d_i(va_list args);

void handle_number(int number);

int number_len(int number);

int handle_unknown(char spc);

int (*get_specifier_handler(char spc))(va_list args);

#endif
