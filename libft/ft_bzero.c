/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/23 15:05:53 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 11:13:20 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;

	tmp = s;
	while (n > 0)
	{
		if (*tmp == 0)
			break ;
		*tmp = 0;
		tmp++;
		n--;
	}
	return (s);
}