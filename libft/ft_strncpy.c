/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:57:18 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:57:21 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	char	*s;

	s = dst;
	while (*src && len > 0)
	{
		*s++ = *src++;
		len--;
	}
	while (len > 0)
	{
		*s++ = 0;
		len--;
	}
	return (dst);
}
