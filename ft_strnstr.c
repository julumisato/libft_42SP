/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 06:56:47 by jusato            #+#    #+#             */
/*   Updated: 2022/04/15 21:43:52 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	if (ft_strlen(str2) == 0)
		return ((char *)str1);
	while (str1[i] && i < n)
	{
		while (str1[i] != *str2 && i < n)
			i ++;
		if (ft_strncmp(&str1[i], str2, ft_strlen(str2)) == 0
			&& ft_strlen(str2) <= n - i)
			return ((char *)&str1[i]);
		i ++;
	}
	return (NULL);
}
