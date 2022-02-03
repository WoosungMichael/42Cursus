/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:01:11 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 15:30:36 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len_s1;
	size_t	len_s2;
	char	*r_str;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen((char *)s1);
	len_s2 = ft_strlen((char *)s2);
	r_str = (char *)malloc(len_s1 + len_s2 + 1);
	if (!r_str)
		return (0);
	ft_memcpy(r_str, s1, len_s1);
	ft_memcpy(r_str + len_s1, s2, len_s2);
	r_str[len_s1 + len_s2] = 0;
	return (r_str);
}
