/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:26:31 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:26:34 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int tmp;
	int cptr;

	cptr = 1;
	if (n < 0)
		ft_putchar_fd('-', fd);
	if (n < 0 && n != -2147483648)
		n = n * -1;
	if (n == -2147483648)
	{
		n = 147483648;
		ft_putchar_fd('2', fd);
	}
	tmp = n;
	while (tmp >= 10)
	{
		cptr = cptr * 10;
		tmp /= 10;
	}
	while (cptr >= 1)
	{
		ft_putchar_fd(((n / cptr) % 10) + 48, fd);
		cptr /= 10;
	}
}
