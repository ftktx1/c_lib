/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:36:16 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 18:41:20 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	tmp_list;
	
	tmp_list = *alst;
	while (tmp_list->content)
	{
		ft_lstdelone(tmp_list, (*del)(*tmp_list->content, tmp_list->content_size))
		tmp_list = *alst->next;
	}
	free(tmp_list);
	return ;
}
