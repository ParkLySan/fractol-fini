/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:00:46 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 21:00:50 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*out;
	size_t	i;

	i = 0;
	if (s)
	{
		if (!(out = malloc(sizeof(char) * len + 1)))
			return (NULL);
		while (i < len)
			out[i++] = s[start++];
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
