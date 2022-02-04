/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 15:06:13 by wookim            #+#    #+#             */
/*   Updated: 2022/02/04 17:04:56 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *str, char const *charset)
{
	size_t	start;
	size_t	end;
	char	*ret;

	if (!str)
		return (NULL);
	if (!charset)
		return (ft_strdup((char *)str));
	start = 0;
	end = ft_strlen((char *)str);
	while (str[start] && ft_strchr((char *)charset, (char)str[start]))
		start++;
	while (str[end - 1] && ft_strchr((char *)charset, (char)str[end - 1]))
	{
		if (end - 1 < start)
			break ;
		end--;
	}
	ret = (char *)malloc(end - start + 1);
	if (!ret)
		return (NULL);
	ft_strlcpy(ret, (char *)str + start, end - start + 1);
	return (ret);
}
