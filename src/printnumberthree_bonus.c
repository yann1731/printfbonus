/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printnumberthree_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:36:14 by yst-laur          #+#    #+#             */
/*   Updated: 2022/01/28 19:36:16 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

void	printnumberthree(t_flags format, int n, int *res)
{
	if (format.space == 1 || format.plus == 1)
		printnumsign(format, n, res);
	else
	{
		if (n < 0 && (format.dotfield > numsize(n)))
			while ((--format.fieldwidth - format.dotfield - 1) >= 0)
				*res += write(1, " ", 1);
		if (n < 0 && (format.dotfield < numsize(n)))
			while ((--format.fieldwidth - numsize(n)) >= 0)
				*res += write(1, " ", 1);
		if (n < 0)
			*res += write(1, "-", 1);
		if (n > 0 && (format.dotfield >= numsize(n)))
			while ((--format.fieldwidth - format.dotfield) >= 0)
				*res += write(1, " ", 1);
		else if (n > 0 && (numsize(n) > format.dotfield))
			while ((--format.fieldwidth - numsize(n)) >= 0)
				*res += write(1, " ", 1);
		if (n == 0 && format.fieldwidth > 0)
			while ((--format.fieldwidth - format.dotfield) >= 0)
				*res += write(1, " ", 1);
	}
	while ((--format.dotfield - numsizedot(n)) >= 0)
		*res += write(1, "0", 1);
}
