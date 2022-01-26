#include "libft.h"
#include "ft_printf_bonus.h"
#include "ft_printf.h"

int	numsizedot(long long n)
{
	long long	i;

	i = 0;
	if (n < 0)
		n = -n;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}
