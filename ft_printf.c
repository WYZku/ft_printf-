/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:33:13 by kwoowong          #+#    #+#             */
/*   Updated: 2022/04/20 23:27:54 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	ft_check_format(char c)
{
	if (c == 'c' || c == 's' || c == 'p' || c == 'd'
		|| c == 'i' || c == 'u' || c == 'x' || c == 'X' || c == '%')
		return (c);
	else
		return (0);
}

int	ft_convert_format(char c, va_list ap)
{
	int	len;

	len = 0;
	if (c == 'c')
		len = ft_c_conversion(va_arg(ap, int));
	else if (c == 's')
		len = ft_s_conversion(va_arg(ap, char *));
	else if (c == 'p')
		len = ft_p_conversion(va_arg(ap, unsigned long long));
	else if (c == 'd' || c == 'i')
		len = ft_d_i_conversion(va_arg(ap, int));
	else if (c == 'u')
		len = ft_u_conversion(va_arg(ap, unsigned int));
	else if (c == 'x' || c == 'X')
		len = ft_x_conversion(va_arg(ap, unsigned int), c);
	else if (c == '%')
	{
		ft_putchar('%');
		len = 1;
	}
	return (len);
}

int	ft_check_num_args(const char *str, va_list ap)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			++i;
			if (ft_check_format(str[i]))
				len += ft_convert_format(str[i], ap);
		}
		else
		{
			ft_putchar(str[i]);
			++len;
		}
		++i;
	}
	return (len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		len;

	if (!str)
		return (0);
	va_start(ap, str);
	len = 0;
	len = ft_check_num_args(str, ap);
	va_end(ap);
	return (len);
}
