/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:59:07 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 19:01:59 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstiter(t_list *lst, void (*f)(t_list *elem))
{
	t_list	tmp_list;

	tmp_list = lst;
	while (tmp_list->content)
	{
		(*f)(tmp_list->content)
		tmp_list = lst->next;
	}
	return ;
}
