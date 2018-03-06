/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kshimek <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/26 16:15:46 by kshimek           #+#    #+#             */
/*   Updated: 2018/03/05 11:44:16 by kshimek          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*strncpy(char *dst, const char *src, size_t len)
{
	int	counter;

	counter = 0;
	while (src[counter] != '\0' && counter < len)
	{
		dst[counter] = src[counter];
		counter++;
	}
	while (dst[counter])
		counter++;
	dst[counter] = '\0';
	return (dst);
}
