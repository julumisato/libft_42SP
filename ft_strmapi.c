/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/13 21:04:47 by jusato            #+#    #+#             */
/*   Updated: 2022/04/13 21:56:30 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*newstr;

	i = 0;
	newstr = (char *)malloc(1 * (ft_strlen(s) + 1));
	if (newstr == NULL || s == NULL)
		return (NULL);
	while (s[i])
	{
		newstr[i] = f(i, s[i]);
		i ++;
	}
	newstr[i] = '\0';
	return (newstr);
}
