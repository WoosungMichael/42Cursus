/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 14:45:17 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 14:44:32 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len_s;

	len_s = ft_strlen(s);
	if (!c)
		return ((char *)s + len_s);
	while (len_s >= 0)
	{
		if (s[len_s] == (char)c)
			return ((char *)s + len_s);
		len_s--;
	}
	return (0);
}
