/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:28:25 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:28:27 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_sqrt(size_t nb)
{
	size_t test;
	size_t out;

	if (nb == 1)
		return (1);
	test = 1;
	out = 0;
	while (out * out < nb)
	{
		out = test + 1;
		test++;
	}
	if (out * out == nb)
		return (out);
	else
		return (0);
}
