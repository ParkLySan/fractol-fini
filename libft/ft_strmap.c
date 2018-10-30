/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:54:59 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:55:03 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*out;
	int		i;

	if (s && f)
	{
		i = -1;
		if (!(out = malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[++i])
			out[i] = f(s[i]);
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
