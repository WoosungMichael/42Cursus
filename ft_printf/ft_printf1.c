/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/23 11:23:50 by wookim            #+#    #+#             */
/*   Updated: 2022/03/23 11:23:52 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	return (i);
}

int	ft_pointer(void *ptr)
{
	int	len;

	len = 0;
	len += ft_putstr("0x");
	len += ft_pointerhexadecimal((unsigned long)ptr);
	return (len);
}

int	ft_pointerhexadecimal(unsigned long nbr)
{
	int	len;

	len = 0;
	if (nbr < 16)
	{
		if (nbr < 10)
			len += ft_putchar(nbr + 48);
		else
			len += ft_putchar(nbr + 87);
	}
	if (nbr > 15)
	{
		len += ft_pointerhexadecimal(nbr / 16);
		len += ft_pointerhexadecimal(nbr % 16);
	}
	return (len);
}
