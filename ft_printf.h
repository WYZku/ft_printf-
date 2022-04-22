/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwoowong <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 18:30:17 by kwoowong          #+#    #+#             */
/*   Updated: 2022/04/20 22:54:12 by kwoowong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

int		ft_strlen(char *str);
int		ft_numlen(long int nb);
int		ft_numlen_hex(unsigned long nb);
int		ft_convert_format(char c, va_list ap);
int		ft_check_num_args(const char *str, va_list ap);
int		ft_printf(const char *str, ...);
int		ft_c_conversion(char c);
int		ft_s_conversion(char *str);
int		ft_p_conversion(unsigned long ptr);
int		ft_d_i_conversion(long int i);
int		ft_u_conversion(unsigned int i);
int		ft_x_conversion(unsigned int i, char c);
char	ft_check_format(char c);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(long int nb);
void	ft_putnbr_hex(unsigned long nb, char c);

#endif
