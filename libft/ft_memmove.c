/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/24 20:19:30 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 15:08:10 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*tmp;
	
	//need to add a conditional here to see if the strings overlap
	tmp = (char *)dst;
	while (len > 0)
	{
		*tmp = *((char *)src);
		tmp++;
		src++;
		len--;
	}
	return (dst);
}
