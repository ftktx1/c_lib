/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:30:12 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 13:49:17 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_strlen.c"

char	*ft_strrchr(const char *s, int c)
{
	int counter;

	counter = ft_strlen(s);
	while (counter >= 0)
	{
		if (s[counter] + 0 == c)
			return (*s[counter]);
		counter--;
	}
	return ("\0");
}
