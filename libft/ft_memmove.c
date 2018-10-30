/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:24:44 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:24:47 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	const char		*src2;

	i = 0;
	src2 = (const char *)src;
	if (dst > src)
		while (len--)
			((char *)dst)[len] = ((const char *)src)[len];
	else
		while (len--)
			((char *)dst)[i++] = *src2++;
	return (dst);
}
