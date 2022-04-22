/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_conversion_c_s_p.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 21:17:49 by kwoowong          #+#    #+#             */
/*   Updated: 2022/04/21 21:17:52 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_c_conversion(char c)
{
	ft_putchar(c);
	return (1);
}

int	ft_s_conversion(char *str)
{
	if (!str)
	{
		ft_putstr("(null)");
		return (6);
	}
	ft_putstr(str);
	return (ft_strlen(str));
}

int	ft_p_conversion(unsigned long ptr)
{
	ft_putstr("0x");
	if (!ptr)
	{
		ft_putchar('0');
		return (3);
	}
	else
	{
		ft_putnbr_hex(ptr, 'x');
	}
	return (ft_numlen_hex(ptr) + 2);
}
