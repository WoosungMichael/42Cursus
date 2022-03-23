/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:29 by wookim            #+#    #+#             */
/*   Updated: 2022/03/23 11:23:33 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_putstr(char *str);
int	ft_putchar(char c);
int	ft_printf(const char *format, ...);
int	ft_putnbr(int n);
int	ft_hexadecimal(unsigned int nbr);
int	ft_hexadecimal_2(unsigned int nbr);
int	ft_unsigned(int nbr);
int	ft_pointer(void *ptr);
int	ft_pointerhexadecimal(unsigned long nbr);
#endif
