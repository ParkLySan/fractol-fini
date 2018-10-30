/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:55:14 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:55:27 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*out;
	int		i;

	if (s && f)
	{
		i = -1;
		if (!(out = malloc(sizeof(char) * ft_strlen(s) + 1)))
			return (NULL);
		while (s[++i])
			out[i] = f(i, s[i]);
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
