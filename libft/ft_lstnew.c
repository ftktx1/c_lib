/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 16:51:09 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 19:16:48 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*fresh_link;

	fresh_link = (t_list *)malloc(sizeof(t_list));
	if (fresh_link == NULL)
		return (NULL);
	if (content == NULL)
	{
		fresh_link->content = NULL;
		fresh_link->content_size = 0;
	}
	else
	{
		fresh_link->content = malloc(sizeof(content));
		if (fresh_link == NULL)
			return (NULL);
		fresh_link->content = content;
		fresh_link->content_size = content_size;
	}
	fresh_link->next = NULL;
	return (fresh_link);
}
