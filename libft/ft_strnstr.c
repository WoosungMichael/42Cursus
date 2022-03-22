/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:24:34 by wookim            #+#    #+#             */
/*   Updated: 2022/02/02 17:10:57 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	size;
	size_t	len_h;
	size_t	len_n;

	if (!*needle)
		return ((char *)haystack);
	len_h = ft_strlen((char *)haystack);
	len_n = ft_strlen((char *)needle);
	if (len_h < len_n || len < len_n)
		return (0);
	if (len_h > len)
		size = len;
	else
		size = len_h;
	while (size-- >= len_n)
	{
		if (!ft_memcmp(haystack, needle, len_n))
			return ((char *)haystack);
		haystack++;
	}
	return (0);
}
