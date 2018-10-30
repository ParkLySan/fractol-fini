/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_check.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 21:14:42 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 21:27:13 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/fractol.h"

static void	ft_arg_loop(int **out, int ac, char **av)
{
	int i;

	i = 0;
	while (++i < ac)
	{
		if (ft_strequ(av[i], "mandelbrot"))
			out[0][0] = 1;
		if (ft_strequ(av[i], "julia"))
			out[0][1] = 1;
		if (ft_strequ(av[i], "newton"))
			out[0][2] = 1;
	}
}

int			*ft_args_check(int ac, char **av)
{
	int	*out;
	int	i;
	int	flag;

	i = 0;
	flag = 0;
	if (ac < 2)
	{
		ft_putstr("usage :\tfractol param1 param2 ...\n");
		ft_putstr("  params: julia mandelbrot newton\n");
		exit(1);
	}
	if (!(out = ft_memalloc(sizeof(int) * 8)))
		ft_error(NO_MEM);
	ft_arg_loop(&out, ac, av);
	i = 0;
	while (i < 8)
		if (out[i++] != 0)
			flag = 1;
	if (flag == 0)
		ft_error(NO_ARGS);
	return (out);
}
