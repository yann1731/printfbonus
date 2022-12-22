/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validateflag.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yst-laur <yst-laur@student.42quebec.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 19:40:32 by yst-laur          #+#    #+#             */
/*   Updated: 2022/01/28 19:40:34 by yst-laur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

int	validateflag(int c)
{
	if (c != 'c' && c != 's' && c != 'd' && c != 'i' && c != 'u'
		&& c != 'p' && c != 'x' && c != 'x' && c != 'X' && c != '%')
		return (0);
	return (1);
}