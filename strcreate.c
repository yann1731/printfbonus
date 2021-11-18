#include "libprintf.h"
#include "libft.h"

// Function to print one character of the format string at a time and check the validity of supplied arguments, if valid
// to be fed to dispatchflag function.
void	strcreate(const char *s, va_list ap, int *res)
{
	while (*s)
	{
		if (*s == '%' && *(s - 1) != '%' && validateflag(*(s + 1)) == 1)
		{
			dispatchflag(*(s + 1), &ap, res);
			s += 2;
		if (*s == '\0')
			break;
		}
		if (*s != '%')
			ft_putchar(*s, res);
		s++;
	}
}