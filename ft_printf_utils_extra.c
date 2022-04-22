/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils_extra.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:18:35 by kwoowong          #+#    #+#             */
/*   Updated: 2022/04/21 21:18:57 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_numlen(long int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		nb = nb * -1;
	while ((nb / 10) > 0)
	{
		nb = nb / 10;
		++i;
	}
	return (i);
}

int	ft_numlen_hex(unsigned long nb)
{
	int	i;

	i = 1;
	while ((nb / 16) > 0)
	{
		nb = nb / 16;
		++i;
	}
	return (i);
}

void	ft_putnbr_hex(unsigned long nb, char c)
{
	if (nb < 16)
	{
		if (nb <= 9)
		{
			ft_putchar(nb + 48);
		}
		else
		{
			if (c == 'x')
				ft_putchar(nb + 87);
			else if (c == 'X')
				ft_putchar(nb + 55);
		}
	}
	else
	{
		ft_putnbr_hex(nb / 16, c);
		ft_putnbr_hex(nb % 16, c);
	}
}
