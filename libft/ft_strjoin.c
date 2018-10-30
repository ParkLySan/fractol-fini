/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:51:25 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:51:28 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*out;
	int		len;
	int		i;

	if (s1 && s2)
	{
		i = 0;
		len = ft_strlen(s1) + ft_strlen(s2);
		if (!(out = malloc(sizeof(*out) * len)))
			return (NULL);
		len = 0;
		while (s1[i])
			out[len++] = s1[i++];
		i = 0;
		while (s2[i])
			out[len++] = s2[i++];
		out[len] = '\0';
		return (out);
	}
	return (NULL);
}
