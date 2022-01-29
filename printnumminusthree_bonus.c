#include "libft.h"
#include "ft_printf_bonus.h"

void	printnumminusthree(t_flags format, int n, int *res)
{
	if (format.plus == 0 && format.space == 0 && n > 0 && (format.dotfield > numsize(n)))
		while ((--format.fieldwidth - format.dotfield) >= 0)
			*res += write(1, " ", 1);
	if (format.plus == 0 && format.space == 0 && n > 0 && (format.dotfield < numsize(n)))
		while ((--format.fieldwidth - numsize(n) >= 0))
			*res += write(1, " ", 1);
	if (format.plus == 0 && format.space == 0 && n < 0)
		while ((--format.fieldwidth - format.dotfield) > 0)
			*res += write(1, " ", 1);
	if (format.plus == 1 || format.space == 1)
		while ((--format.fieldwidth - format.dotfield) > 0)
			*res += write(1, " ", 1);
	if (n == 0)
		while ((--format.fieldwidth - format.dotfield) >= 0)
			*res += write(1, " ", 1);
}