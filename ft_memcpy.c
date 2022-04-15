/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 01:03:38 by jusato            #+#    #+#             */
/*   Updated: 2022/04/07 04:46:03 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (src == NULL || dest == NULL)
		return (dest);
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (n > 0)
	{
		d[n - 1] = s[n - 1];
		n --;
	}
	return (dest);
}
