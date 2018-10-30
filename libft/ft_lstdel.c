/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:19:28 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:19:31 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list *next;

	while ((*alst)->next)
	{
		next = (*alst)->next;
		ft_lstdelone(alst, del);
		*alst = next;
	}
	ft_lstdelone(alst, del);
	free(*alst);
	*alst = NULL;
}
