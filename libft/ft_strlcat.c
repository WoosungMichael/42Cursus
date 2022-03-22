/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:06:55 by wookim            #+#    #+#             */
/*   Updated: 2022/02/02 17:49:40 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	str_len(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	d_len;
	size_t	s_len;

	d_len = str_len(dst);
	s_len = str_len(src);
	i = 0;
	while (*dst)
	{
		dst++;
		i++;
	}
	while (*src && i + 1 < size)
	{
		*dst = *src;
		dst++;
		src++;
		i++;
	}
	*dst = 0;
	if (d_len > size)
		return (s_len + size);
	else
		return (s_len + d_len);
}
