/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:26:46 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 14:32:13 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	cnt_size;

	cnt_size = count * size;
	ptr = malloc(cnt_size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, cnt_size);
	return (ptr);
}
