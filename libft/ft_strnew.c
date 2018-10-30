/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:58:15 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:58:18 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *out;

	if (!(out = malloc(sizeof(char) * size + 1)))
		return (NULL);
	else
	{
		ft_bzero(out, size + 1);
		return (out);
	}
}
