/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 11:22:22 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 11:32:47 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*memchr(const void *s, int c, size_t n)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)s;
	while (n > 0 && *tmp != '\0')
	{
		if (*tmp == c)
			break ;
		n--;
		tmp++;
	}
	return (tmp);
}
