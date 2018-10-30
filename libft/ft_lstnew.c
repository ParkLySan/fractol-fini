/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: litoulza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/30 20:21:53 by litoulza          #+#    #+#             */
/*   Updated: 2018/10/30 20:21:55 by litoulza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(const void *content, size_t content_size)
{
	t_list	*out;

	out = malloc(sizeof(*out));
	if (out)
	{
		out->content_size = content_size;
		if (!content)
		{
			out->content = NULL;
			out->content_size = 0;
		}
		else if ((out->content = malloc(sizeof(char) * content_size)) != 0)
			ft_memmove(out->content, content, content_size);
		out->next = NULL;
		return (out);
	}
	return (NULL);
}
