/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 12:06:19 by wookim            #+#    #+#             */
/*   Updated: 2022/02/02 16:58:18 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*src_new;
	unsigned char	*dst_new;

	if (dst == src || !len)
		return (dst);
	src_new = (unsigned char *)src;
	dst_new = (unsigned char *)dst;
	if (dst < src)
	{
		while (len--)
			*(dst_new++) = *(src_new++);
	}
	else
	{
		while (len--)
			*(dst_new + len) = *(src_new + len);
	}
	return (dst);
}
