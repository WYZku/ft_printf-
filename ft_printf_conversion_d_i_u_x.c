/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion_d_i_u_x.c                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:18:09 by kwoowong          #+#    #+#             */
/*   Updated: 2022/04/21 21:18:11 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_d_i_conversion(long int i)
{
	int	neg;

	neg = 0;
	if (i < 0)
	{
		ft_putchar('-');
		i = i * -1;
		neg = 1;
	}
	ft_putnbr(i);
	return (ft_numlen(i) + neg);
}

int	ft_u_conversion(unsigned int i)
{
	ft_putnbr(i);
	return (ft_numlen(i));
}

int	ft_x_conversion(unsigned int i, char c)
{
	ft_putnbr_hex(i, c);
	return (ft_numlen_hex(i));
}
