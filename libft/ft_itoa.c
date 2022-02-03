/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:21:29 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 15:33:29 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	ft_abs(long int num)
{
	if (num < 0)
		return (-num);
	else
		return (num);
}

static int	count_digit(int num)
{
	int	len;

	if (num <= 0)
		len = 1;
	else
		len = 0;
	while (num != 0)
	{
		len++;
		num /= 10;
	}
	return (len);
}

char	*ft_itoa(int num)
{
	char	*ret;
	int		num_len;
	int		min_flag;

	min_flag = num < 0;
	num_len = count_digit(num);
	ret = (char *)malloc(num_len + 1);
	if (!ret)
		return (0);
	ret[num_len--] = 0;
	while (num_len >= 0)
	{
		ret[num_len] = ft_abs(num % 10) + '0';
		num_len--;
		num = ft_abs(num / 10);
	}
	if (min_flag)
		ret[0] = '-';
	return (ret);
}
