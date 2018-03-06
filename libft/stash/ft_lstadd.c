/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:41:34 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 18:58:39 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_lstadd(t_list **alst, t_list *new)
{
	t_list	fresh_link;

	fresh_link = ft_lstnew(t_list->content, t_list->content_size);
	fresh_link->next = *alst;
	return ;
}
