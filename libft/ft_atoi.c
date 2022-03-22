/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:25:09 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 14:49:39 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check(char c)
{
	if (c == ' ' || c == '\n')
		return (1);
	else if (c == '\t' || c == '\v')
		return (1);
	else if (c == '\f' || c == '\r')
		return (1);
	else
		return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	int			flag;
	long long	answer;

	i = 0;
	flag = 1;
	answer = 0;
	while (check(str[i]))
		i++;
	if (str[i] == '-')
		flag *= -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		answer *= 10;
		answer += str[i++] - '0';
	}
	return (answer * flag);
}
