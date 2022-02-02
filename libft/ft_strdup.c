/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wookim <wookim@student.42seoul.kr>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 15:27:01 by wookim            #+#    #+#             */
/*   Updated: 2022/02/02 16:35:23 by wookim           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*str1;

	i = 0;
	len = ft_strlen(src);
	str1 = (char *)malloc(sizeof(char) * len + 1);
	if (str1 == NULL)
		return (NULL);
	while (src[i] != '\0')
	{
		str1[i] = src[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}
