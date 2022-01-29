#include "libft.h"
#include "ft_printf_bonus.h"

void	printnumspace(t_flags format, int n, int *res)
{
	if (format.plus == 1 || format.space == 1)
		while ((--format.fieldwidth - numsizedot(n) - 1) >= 0)
			*res += write(1, " ", 1);
	else
		while ((--format.fieldwidth - numsize(n)) >= 0)
			*res += write(1, " ", 1);
	if (format.plus == 1 && n >= 0)
		*res += write(1, "+", 1);
	if (format.space == 1 && n >= 0 && format.plus != 1)
		*res += write(1, " ", 1);
}