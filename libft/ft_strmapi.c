/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:01:44 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 14:42:43 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*fresh_str;
	unsigned int	counter;

	counter = 0;
	fresh_str = (char *)malloc(sizeof(char) * strlen(s) + 1);
	while (s[counter])
	{
		fresh_str[counter] == (*f)(counter, s[counter]);
		counter++;
	}
	fresh_str[counter] = '\0';
	return (fresh_str);
}
