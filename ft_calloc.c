/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jusato <jusato@student.42sp.org.br>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/06 22:14:00 by jusato            #+#    #+#             */
/*   Updated: 2022/04/20 20:42:07 by jusato           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*ptr;

	if (sizeof(size_t) / size < n)
		return (NULL);
	ptr = (char *)malloc(n * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, size * n);
	return ((void *)ptr);
}
