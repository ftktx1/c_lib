/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 13:56:28 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 14:41:22 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	* ft_strmap(char const *s, char (*f)(char))
{
	char			* fresh_str;
	unsigned int	counter;

	counter = 0;
	fresh_str = (char *)malloc(sizeof(char) * strlen(s) + 1);
	while(s[counter])
	{
		fresh_str[counter] == (*f)(s[counter]);
		counter++;
	}
	fresh_str[counter] = '\0';
	return (fresh_str);
}
