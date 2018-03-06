/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:13:37 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/06 08:47:05 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_is_whitespace.c"

char	*ft_strtrim(char const *s)
{
	int		start;
	int		end;
	char	*fresh_str;

	start = 0;
	while (is_whitespace(s[start]) == 1 && s[start] != '\0')
		start++;
	end = ft_strlen(s) - 1;
	if (end == start)
	{
		fresh_str = (char *)malloc(sizeof(char) * 1);
		fresh_str[0] = '\0';
		return (fresh_str);
	}
	while (is_whitespace(s[end]) == 1)
		end--;
	fresh_str = (char *)malloc(sizeof(char) * (end - start + 1) + 1);
	while (start <= end)
	{
		*fresh_str = s[start];
		start++;
		fresh_str++;
	}
	*fresh_str = '\0';
	return (fresh_str);
}
