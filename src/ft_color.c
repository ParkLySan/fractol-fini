/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_color.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:15:37 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 21:15:40 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

int	ft_color(int iter)
{
	int				out;
	unsigned char	*pt;

	out = 0;
	pt = (unsigned char *)&out;
	pt[0] = (sin(0.1 * iter + 4) * 127 + 127);
	pt[1] = (sin(0.013 * iter + 3) * 200 + 50);
	pt[2] = (sin(0.01 * iter + 4) * 127 + 127);
	pt[3] = 0;
	return (out);
}
