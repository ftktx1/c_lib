/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 11:33:45 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/06 15:24:26 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*tmp;

	tmp = b;
	while (len > 0)
	{
		if (*tmp == 0)
			break ;
		*tmp = (unsigned char)c;
		tmp++;
		len--;
	}
	return (b);
}
