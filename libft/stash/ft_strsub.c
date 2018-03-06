/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/05 14:07:07 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/06 08:46:40 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*substr;

	substr = (char *)malloc(sizeof(char) * len + 1);
	while (s[start] != '\0' && len > 0)
	{
		*substr = s[start];
		start++;
		len--;
	}
	return (substr);
}
