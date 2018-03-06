/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 19:02:07 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 19:12:41 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	f_list;
	t_list	tmp_list;

	tmp_list = lst;
	if (tmp_list->content)
		f_list = ft_lstnew(tmp_list->content, tmp_list->conent_size);
	else
		return (NULL);
	while (tmp_list->content)
	{
		ft_lstadd(ft_lstiter(tmp_list, (*f)(tmp_list->content)), f_list);
		tmp_list->content = tmp_list->next;
	}
	return ;
}
