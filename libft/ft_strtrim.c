/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:06:13 by wookim            #+#    #+#             */
/*   Updated: 2022/02/03 15:32:03 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ret;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup((char *)s1));
	start = 0;
	end = ft_strlen((char *)s1);
	while (s1[start] && ft_strchr((char *)set, (char)s1[start]))
		start++;
	while (s1[end - 1] && ft_strchr((char *)set, (char)s1[end - 1]))
	{
		if (end - 1 < 1)
			break ;
		end--;
	}
	if (start > end)
		return (ft_strdup(""));
	ret = (char *)malloc(end - start + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (char *)s1 + start, end - start + 1);
	return (ret);
}
