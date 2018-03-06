/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 18:30:13 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 18:36:10 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t))
{
	(*del)(*alst->content, *alst->content_size);
	free(*alst->content);
	free(*alst->content_size);
	ft_memdel(alst);
	return ;
}
