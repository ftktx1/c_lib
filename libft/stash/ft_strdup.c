/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 15:48:02 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 19:16:21 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_strlen.c"

char	*ft_strdup(const char *s1)
{
	char	*s2;
	int		counter;

	counter = 0;
	s2 = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	ft_strcpy(s2, s1);
	return (s2);
}
